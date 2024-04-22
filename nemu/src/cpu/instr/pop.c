#include "cpu/instr.h"
/*
Put the implementations of `pop' instructions here.
*/

static void instr_execute_1op() {
    opr_dest.type = OPR_MEM;
    opr_dest.sreg = SREG_DS;
    opr_dest.addr = cpu.esp;
    operand_read(&opr_dest);
    opr_src.val = opr_dest.val;
    operand_write(&opr_src);
    cpu.esp += data_size / 8;
}

make_instr_impl_1op(pop, r, v);
make_instr_impl_1op(pop, rm, v);
make_instr_impl_1op(pop, rm, b);
make_instr_impl_1op(pop, i, v);

make_instr_func(pop_all) {
    opr_src.data_size = 32;
    opr_src.type = OPR_MEM;
    opr_src.sreg = SREG_DS;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.edi = opr_src.val;
    cpu.esp += 4;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.esi = opr_src.val;
    cpu.esp += 4;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.ebp = opr_src.val;
    cpu.esp += 4;
    
    cpu.esp += 4;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.ebx = opr_src.val;
    cpu.esp += 4;
 
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.edx = opr_src.val;
    cpu.esp += 4;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.ecx = opr_src.val;
    cpu.esp += 4;
    
    opr_src.addr = cpu.esp;
    operand_read(&opr_src);
    cpu.eax = opr_src.val;
    cpu.esp += 4;
    
    return 1;
}