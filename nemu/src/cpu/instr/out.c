#include "cpu/instr.h"
#include "device/port_io.h"
/*
Put the implementations of `out' instructions here.
*/

make_instr_func(out_b) {
    pio_write(cpu.edx & 0xffff, 1, cpu.eax & 0xff);
    return 1;
}

make_instr_func(out_v) {
    uint32_t data = cpu.eax & (0xffffffff >> (32 - data_size));
    pio_write(cpu.edx & 0xffff, data_size / 8, data);
    return 1;
}