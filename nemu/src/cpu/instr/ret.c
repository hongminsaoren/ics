#include "cpu/instr.h"
/*
Put the implementations of `ret' instructions here.
*/
make_instr_func(ret_near) {
    OPERAND target;
    target.data_size = data_size;
    target.type = OPR_MEM;
    target.sreg = SREG_DS;
    target.addr = cpu.esp;
    operand_read(&target);
    cpu.eip = target.val;
    cpu.esp += data_size / 8;
    return 0;
}

make_instr_func(ret_near_w) {
    OPERAND imm16;
    imm16.data_size = 16;
    imm16.type = OPR_IMM;
    imm16.addr = cpu.eip + 1;
    operand_read(&imm16);
    
    OPERAND target;
    target.data_size = data_size;
    target.type = OPR_MEM;
    target.sreg = SREG_DS;
    target.addr = cpu.esp;
    operand_read(&target);
    cpu.eip = target.val;
    cpu.esp += (data_size / 8) + sign_ext(imm16.val, 16);
    return 0;
}