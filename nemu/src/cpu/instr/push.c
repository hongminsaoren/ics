#include "cpu/instr.h"
/*
Put the implementations of `push' instructions here.
*/

static void instr_execute_1op() {
    operand_read(&opr_src);
    cpu.esp -= (data_size / 8);
    opr_dest.type = OPR_MEM;
    opr_dest.sreg = SREG_DS;
    opr_dest.addr = cpu.esp;
    opr_dest.val = opr_src.val;
    operand_write(&opr_dest);
}

make_instr_impl_1op(push, r, v);
make_instr_impl_1op(push, rm, v);
make_instr_impl_1op(push, i, v);


make_instr_func(push_i_b) {
    opr_src.data_size = 8;
    opr_src.type = OPR_IMM;
    opr_src.sreg = SREG_CS;
    opr_src.addr = cpu.eip + 1;
    operand_read(&opr_src);
    cpu.esp -= data_size / 8;
    opr_dest.data_size = data_size;
    opr_dest.type = OPR_MEM;
    opr_dest.sreg = SREG_DS;
    opr_dest.addr = cpu.esp;
    opr_dest.val = sign_ext(opr_src.val, 8);
    operand_write(&opr_dest);
    return 2;
}


make_instr_func(push_all) {
    uint32_t esp = cpu.esp;
    opr_dest.data_size = data_size;
	opr_dest.type = OPR_MEM;
	opr_dest.sreg = SREG_DS;
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.eax;
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.ecx;
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.edx;
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.ebx;
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = sign_ext(esp, data_size);
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.ebp;
	operand_write(&opr_dest);

	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.esi;
	operand_write(&opr_dest);
	
	cpu.esp -= data_size / 8;
	opr_dest.addr = cpu.esp;
	opr_dest.val = cpu.edi;
	operand_write(&opr_dest);
	
	return 1;
}