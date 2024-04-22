#include "cpu/cpu.h"
#include "memory/memory.h"

// translate from linear address to physical address
paddr_t page_translate(laddr_t laddr)
{
#ifndef TLB_ENABLED
	uint32_t dir = (laddr >> 22) & 0x3ff;
	uint32_t page = (laddr >> 12) & 0x3ff;
	uint32_t offset = laddr & 0xfff;
	PDE *page_dir = (PDE *)(hw_mem + (cpu.cr3.pdbr << 12) + (dir << 2));
	assert(page_dir->present == 1);
	PTE *page_table = (PTE *)(hw_mem + (page_dir->page_frame << 12) + (page << 2));
	assert(page_table->present == 1);
	return ((page_table->page_frame << 12) + offset);
#else
	return tlb_read(laddr) | (laddr & PAGE_MASK);
#endif
}
