#include "cpu/intr.h"
#include "cpu/instr.h"
#include "memory/memory.h"

void raise_intr(uint8_t intr_no)
{
#ifdef IA32_INTR
    GateDesc* gd;
    
	OPERAND rel;
	rel.sreg = SREG_SS;
	rel.type = OPR_MEM;
	
	cpu.esp -= 4;
	rel.data_size = 32;
	rel.addr = cpu.esp;
	rel.val = cpu.eflags.val;
	operand_write(&rel);
	
	cpu.esp -= 4;
	rel.addr = cpu.esp;
	rel.val = cpu.segReg[1].val;
	operand_write(&rel);
	
	cpu.esp -= 4;
	rel.addr = cpu.esp;
	rel.val = cpu.eip;
	operand_write(&rel);
	
	gd = (GateDesc*)(hw_mem + page_translate(segment_translate(cpu.idtr.base + 8 * intr_no, SREG_CS)));
	if (gd->type == 0xe){
	    cpu.eflags.IF = 0;
	}
	cpu.segReg[1].val = gd->selector;
	cpu.eip = (gd->offset_31_16 << 16) | gd->offset_15_0;
	
	
#endif
}

void raise_sw_intr(uint8_t intr_no)
{
	// return address is the next instruction
	cpu.eip += 2;
	raise_intr(intr_no);
}
