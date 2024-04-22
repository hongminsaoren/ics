#include "cpu/instr.h"
/*
Put the implementations of `iret' instructions here.
*/
make_instr_func(iret) {
    OPERAND rel;
    rel.type = OPR_MEM;
    rel.sreg = SREG_SS;
    
    rel.data_size = 32;
    rel.addr = cpu.esp;
    operand_read(&rel);
    cpu.eip = rel.val;
    cpu.esp += 4;
    
    rel.addr = cpu.esp;
    operand_read(&rel);
    cpu.segReg[1].val = rel.val & 0xFFFF;
    cpu.esp += 4;
    
    rel.addr = cpu.esp;
    operand_read(&rel);
    cpu.eflags.val = rel.val;
    cpu.esp += 4;
    
    return 0;
    
}