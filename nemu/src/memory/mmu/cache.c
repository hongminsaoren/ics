#include "cpu/cpu.h"
#include "memory/memory.h"
#include "memory/mmu/cache.h"
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

CacheLine cache[1024];
extern uint32_t hw_mem_read(paddr_t paddr, size_t len);
extern void hw_mem_write(paddr_t paddr, size_t len, uint32_t data);

void init_cache() {
	for(int i = 0; i < 1024; i++) {
	    cache[i].valid_bit = false;
	}
}

// read data from cache
uint32_t cache_read(paddr_t paddr, size_t len)
{
	// implement me in PA 3-1
	//printf("1\n");
	//printf("++++++++++++++++++++++++++++++++++++=\n");
	uint32_t tag = (paddr >> 13) & 0x7ffff; //tag: 19bits
	uint32_t index = (paddr >> 6) & 0x7f;
	uint32_t offset = paddr & 0x3f;
	uint32_t read_data = 0;
	
	int i;
	for (i = 0; i < 8; i++) {
	    uint32_t target = (index << 3) + i;
	    if (cache[target].valid_bit && cache[target].tag == tag) { //cache hit
	        if (len + offset <= 64) {
	            memcpy(&read_data, &(cache[target].data[offset]), len);
	        }
	        else {
	            uint32_t data_l = cache_read(paddr, 64 - offset);
	            uint32_t data_h = cache_read(paddr + 64 - offset, len - (64 - offset));
	            read_data = (data_h << (8 * (64 - offset))) | data_l;
	        }
	        return read_data;
	    }
	}
	
	if (i == 8) { //cache miss
	    uint32_t blk_addr = paddr & 0xffffffc0;
	    uint32_t target = (index << 3) + (rand() % 8);
		for(int i = 0; i < 64; i++) {
			uint8_t dat_r = hw_mem_read(blk_addr + i, 1);
			cache[target].data[i] = dat_r;
		}
        cache[target].valid_bit = 1;
        cache[target].tag = tag;
        
        if (len + offset <= 64) {
            read_data = cache_read(paddr, len);
        }
        else {
            uint32_t data_l = cache_read(paddr, 64 - offset);
	        uint32_t data_h = cache_read(paddr + 64 - offset, len - (64 - offset));
	        read_data = (data_h << (8 * (64 - offset))) | data_l;
        }
	}
	    
	return read_data;
}



// write data to cache
void cache_write(paddr_t paddr, size_t len, uint32_t data)
{
	// implement me in PA 3-1
	//printf("++++++++++++++++++++++++++++++++++++=\n");
	uint32_t tag = (paddr >> 13) & 0x7ffff; //tag: 19bits
	uint32_t index = (paddr >> 6) & 0x7f;
	uint32_t offset = paddr & 0x3f;
	
	int i;
	for (i = 0; i < 8; i++) {
	    uint32_t target = (index << 3) + i;
	    if (cache[target].valid_bit && cache[target].tag == tag) { //cache hit
	        if (len + offset <= 64) {
	            memcpy(&(cache[target].data[offset]), &data, len);
	            hw_mem_write(paddr, len, data);
	        }
	        else {
	            cache_write(paddr, 64 - offset, data);
	            cache_write(paddr +  64 - offset, len - (64 - offset), data >> (8 * (64 - offset)));
	        }
	        return;
	    }
	}
	
	if (i == 8) //cache miss
	    hw_mem_write(paddr, len, data);
}
