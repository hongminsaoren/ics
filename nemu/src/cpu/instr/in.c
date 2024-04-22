#include "cpu/instr.h"
#include "device/port_io.h"
/*
Put the implementations of `in' instructions here.
*/
make_instr_func(in_b){
    cpu.eax = pio_read(cpu.edx & 0xffff, 1);
    return 1;
}

make_instr_func(in_v){
    cpu.eax = pio_read(cpu.edx & 0xffff, data_size / 8);
    return 1;
}