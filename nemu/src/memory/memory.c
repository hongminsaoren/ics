#include "nemu.h"
#include "cpu/cpu.h"
#include "memory/memory.h"
#include "memory/mmu/cache.h"
#include "device/mm_io.h"
#include <memory.h>
#include <stdio.h>

uint8_t hw_mem[MEM_SIZE_B];

uint32_t hw_mem_read(paddr_t paddr, size_t len) //size_t unsigned int(32-bit arch) 
{
	uint32_t ret = 0;
	memcpy(&ret, hw_mem + paddr, len);
	return ret;
}

void hw_mem_write(paddr_t paddr, size_t len, uint32_t data)
{
	memcpy(hw_mem + paddr, &data, len);
}

uint32_t paddr_read(paddr_t paddr, size_t len)
{
    uint32_t ret = 0;
    int num = is_mmio(paddr);
    if (num != -1) {
        return mmio_read(paddr, len, num);
    }

#ifdef CACHE_ENABLED
		ret = cache_read(paddr, len);
#else
		ret = hw_mem_read(paddr, len);
#endif
	return ret;
}

void paddr_write(paddr_t paddr, size_t len, uint32_t data)
{
    int num = is_mmio(paddr);
    if (num != -1) {
        mmio_write(paddr, len, data, num);
        return;
    }
    
#ifdef CACHE_ENABLED
		cache_write(paddr, len, data);
#else
		hw_mem_write(paddr, len, data);
#endif
}

uint32_t laddr_read(laddr_t laddr, size_t len)
{
#ifndef IA32_PAGE
	return paddr_read(laddr, len);
#else
    uint32_t paddr = laddr;
    if (cpu.cr0.pg == 1) {
        if ((laddr >> 12) != ((laddr + len - 1) >> 12)) {
            uint32_t boud_laddr = ((laddr >> 12) + 1) << 12;
            uint32_t len_low = boud_laddr - laddr;
            uint32_t data_low = paddr_read(page_translate(laddr), len_low);
            uint32_t data_high = paddr_read(page_translate(boud_laddr), len - len_low);
            return (data_high << (len_low << 3)) | data_low;
        }
        else {
            paddr = page_translate(laddr);
            return paddr_read(paddr, len);
        }
    }
    else return paddr_read(paddr, len);
#endif
}

void laddr_write(laddr_t laddr, size_t len, uint32_t data)
{
#ifndef IA32_PAGE
	paddr_write(laddr, len, data);
#else
    uint32_t paddr = laddr;
    if (cpu.cr0.pg == 1) {
        if ((laddr >> 12) != ((laddr + len - 1) >> 12)) {
            uint32_t boud_laddr = ((laddr >> 12) + 1) << 12;
            uint32_t len_low = boud_laddr - laddr;
            uint32_t mask = 0xffffffff >> (32 - (len_low << 3));
            uint32_t data_low = data & mask;
            uint32_t data_high = data >> (len_low << 3);
            paddr_write(page_translate(laddr), len_low, data_low);
            paddr_write(page_translate(boud_laddr), len - len_low, data_high);
        }
        else {
            paddr = page_translate(laddr);
            paddr_write(paddr, len, data);
        }
    }
    else paddr_write(paddr, len, data);
#endif
}

uint32_t vaddr_read(vaddr_t vaddr, uint8_t sreg, size_t len) //sreg segment register
{
	assert(len == 1 || len == 2 || len == 4);
#ifndef IA32_SEG
	return laddr_read(vaddr, len);
#else
	uint32_t laddr = vaddr;
	if(cpu.cr0.pe == 1) {
		laddr = segment_translate(vaddr, sreg);
	}
	return laddr_read(laddr, len);
#endif
}

void vaddr_write(vaddr_t vaddr, uint8_t sreg, size_t len, uint32_t data)
{
	assert(len == 1 || len == 2 || len == 4);
#ifndef IA32_SEG
	return laddr_write(vaddr, len, data);
#else
	uint32_t laddr = vaddr;
	if(cpu.cr0.pe == 1) {
		laddr = segment_translate(vaddr, sreg);
	}
	return laddr_write(laddr, len, data);
#endif
}

void init_mem()
{
	// clear the memory on initiation
	memset(hw_mem, 0, MEM_SIZE_B);
	
#ifdef CACHE_ENABLED
	init_cache();
#endif

#ifdef TLB_ENABLED
	make_all_tlb();
	init_all_tlb();
#endif
}

uint32_t instr_fetch(vaddr_t vaddr, size_t len)
{
	assert(len == 1 || len == 2 || len == 4);
	return vaddr_read(vaddr, SREG_CS, len);
}

uint8_t *get_mem_addr()
{
	return hw_mem;
}
