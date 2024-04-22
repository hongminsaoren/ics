#include "cpu/instr.h"
/*
Put the implementations of `call' instructions here.
*/

make_instr_func(call_near) {
    OPERAND rel;
    rel.data_size = data_size;
    rel.type = OPR_IMM;
    rel.sreg = SREG_CS;
    rel.addr = cpu.eip + 1;
    operand_read(&rel);
    
    OPERAND next_instr;
    cpu.esp -= data_size / 8;
    next_instr.data_size = data_size;
    next_instr.type = OPR_MEM;
    next_instr.sreg = SREG_DS;
    next_instr.addr = cpu.esp;
    next_instr.val = cpu.eip + 1 + (data_size / 8);
    operand_write(&next_instr);
    cpu.eip += 1 + (data_size / 8) + sign_ext(rel.val, data_size);
    return 0;
    
}


make_instr_func(call_near_indirect) {
    int len = 1;
	OPERAND rel;
	rel.data_size = data_size;
    len += modrm_rm(eip+1, &rel);
    operand_read(&rel);
	
	OPERAND next_instr;
	cpu.esp -= data_size/8;
	next_instr.data_size = data_size;
	next_instr.type = OPR_MEM;
	next_instr.sreg = SREG_DS;
	next_instr.addr = cpu.esp;
	next_instr.val = cpu.eip + len;
	operand_write(&next_instr);
	if (data_size==16)
		cpu.eip = rel.val & 0xFFFF;
	else
		cpu.eip = rel.val;
	return 0;    
}