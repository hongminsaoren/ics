#include "cpu/instr.h"
/*
Put the implementations of `lidt' instructions here.
*/
make_instr_func(lidt) {
    OPERAND rel;
    rel.data_size = 16;
    int len = 1;
    len += modrm_rm(eip + 1, &rel);
    operand_read(&rel);
    cpu.idtr.limit = rel.val;
    
    rel.data_size = 32;
    rel.addr = rel.addr + 2;
    operand_read(&rel);
    cpu.idtr.base = rel.val;
    
    return len;
}