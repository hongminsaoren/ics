#include "cpu/instr.h"
/*
Put the implementations of `leave' instructions here.
*/

make_instr_func(leave) {
    cpu.esp = cpu.ebp;
    OPERAND last_ebp;
    last_ebp.data_size = data_size;
    last_ebp.type = OPR_MEM;
    last_ebp.sreg = SREG_DS;
    last_ebp.addr = cpu.esp;
    operand_read(&last_ebp);
    cpu.ebp = last_ebp.val;
    cpu.esp += data_size / 8;
    return 1;
}