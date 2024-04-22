#include "cpu/cpu.h"

void set_CF_add(uint32_t result, uint32_t src, size_t data_size)
{
    result = sign_ext((0xFFFFFFFF>>(32-data_size)) & result, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    cpu.eflags.CF = result < src;
}

void set_CF_adc(uint32_t result, uint32_t src, size_t data_size)
{
    result = sign_ext((0xFFFFFFFF>>(32-data_size)) & result, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    if (cpu.eflags.CF == 0) cpu.eflags.CF = result < src;
    else cpu.eflags.CF = result <= src;
}

void set_CF_sub(uint32_t dest, uint32_t src, size_t data_size)
{  
    dest = sign_ext((0xFFFFFFFF>>(32-data_size)) & dest, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    cpu.eflags.CF = dest < src;
}

void set_CF_sbb(uint32_t dest, uint32_t src, size_t data_size)
{  
    dest = sign_ext((0xFFFFFFFF>>(32-data_size)) & dest, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    if (cpu.eflags.CF == 0) cpu.eflags.CF = dest < src;
    else cpu.eflags.CF = dest <= src;
}

void set_ZF(uint32_t result, size_t data_size)
{
    result = (0xFFFFFFFF>>(32-data_size)) & result;
    cpu.eflags.ZF = (result == 0);
}

void set_SF(uint32_t result, size_t data_size)
{
    result = sign_ext((0xFFFFFFFF>>(32-data_size)) & result, data_size);
    cpu.eflags.SF = sign(result);
}

void set_PF(uint32_t result)
{
    int bit_count = 0;
    
    if ((result & 0x00000001) != 0) bit_count++;
    if ((result & 0x00000002) != 0) bit_count++;
    if ((result & 0x00000004) != 0) bit_count++;
    if ((result & 0x00000008) != 0) bit_count++;
    if ((result & 0x00000010) != 0) bit_count++;
    if ((result & 0x00000020) != 0) bit_count++;
    if ((result & 0x00000040) != 0) bit_count++;
    if ((result & 0x00000080) != 0) bit_count++;
    
    cpu.eflags.PF = ((bit_count % 2) == 0);
}

void set_OF_add(uint32_t result, uint32_t src, uint32_t dest, size_t data_size)
{
    result = sign_ext((0xFFFFFFFF>>(32-data_size)) & result, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    dest = sign_ext((0xFFFFFFFF>>(32-data_size)) & dest, data_size);
    cpu.eflags.OF = (sign(src) == sign(dest)) && (sign(result) != sign(src));
}

void set_OF_sub(uint32_t result, uint32_t src, uint32_t dest, size_t data_size)
{
    result = sign_ext((0xFFFFFFFF>>(32-data_size)) & result, data_size);
    src = sign_ext((0xFFFFFFFF>>(32-data_size)) & src, data_size);
    dest = sign_ext((0xFFFFFFFF>>(32-data_size)) & dest, data_size);
    cpu.eflags.OF = (sign(src) != sign(dest)) && (sign(result) != sign(dest));
}

void set_CFOF_mul(uint64_t result, size_t data_size)
{
    cpu.eflags.CF = cpu.eflags.OF = (data_size == 8 && (result & 0xFF00) != 0) || 
                                    (data_size == 16 && (result & 0xFFFF0000) != 0) || 
                                    (data_size == 32 && (result & 0xFFFFFFFF00000000) != 0);
}

uint32_t alu_add(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_add(src, dest, data_size);
#else
    uint32_t result;
    result = dest + src;
    
    set_CF_add(result, src, data_size);
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    set_OF_add(result, src, dest, data_size);
    
	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

uint32_t alu_adc(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_adc(src, dest, data_size);
#else

    uint32_t result;
    result = dest + src + cpu.eflags.CF;
    
    set_CF_adc(result, src, data_size);
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    set_OF_add(result, src, dest, data_size);

	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

uint32_t alu_sub(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_sub(src, dest, data_size);
#else
	
	uint32_t result;
	result = dest - src;
	
	set_CF_sub(dest, src, data_size);
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    set_OF_sub(result, src, dest, data_size);
	
	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

uint32_t alu_sbb(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_sbb(src, dest, data_size);
#else
    uint32_t result;
    result = dest - (src + cpu.eflags.CF);
    
    set_CF_sbb(dest, src, data_size);
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    set_OF_sub(result, src, dest, data_size);
    
	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

uint64_t alu_mul(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_mul(src, dest, data_size);
#else
    uint64_t result;
    
    if (data_size == 8 || data_size == 16) result = src * dest;
    else result = (uint64_t)src * (uint64_t)dest;
    set_CFOF_mul(result, data_size);
    
    return result;
#endif
}

int64_t alu_imul(int32_t src, int32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_imul(src, dest, data_size);
#else
	int64_t result;
    if (data_size == 8 || data_size == 16) result = src * dest;
    else result = (int64_t)src * (int64_t)dest;
	return result;
#endif
}

// need to implement alu_mod before testing
uint32_t alu_div(uint64_t src, uint64_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_div(src, dest, data_size);
#else
    uint32_t result;
    if (src == 0) result = 0;
    else result = dest / src;
	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

// need to implement alu_imod before testing
int32_t alu_idiv(int64_t src, int64_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_idiv(src, dest, data_size);
#else
    uint32_t result;
    if (src == 0) result = 0;
    else result = dest / src;
	return (0xFFFFFFFF>>(32 - data_size)) & result;
#endif
}

uint32_t alu_mod(uint64_t src, uint64_t dest)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_mod(src, dest);
#else
    uint32_t result;
    if (src == 0) result = 0;
    else result = dest % src;
	return result;
#endif
}

int32_t alu_imod(int64_t src, int64_t dest)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_imod(src, dest);
#else
    uint32_t result;
    if (src == 0) result = 0;
    else result = dest % src;
	return result;
#endif
}

uint32_t alu_and(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_and(src, dest, data_size);
#else
    uint32_t result;
    result = src & dest;
    
    cpu.eflags.CF = 0;
    cpu.eflags.OF = 0;
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    
	return (0xFFFFFFFF>>(32-data_size)) & result;
#endif
}

uint32_t alu_xor(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_xor(src, dest, data_size);
#else
    uint32_t result;
    result = src ^ dest;
    
    cpu.eflags.CF = 0;
    cpu.eflags.OF = 0;
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    
	return (0xFFFFFFFF>>(32-data_size)) & result;
#endif
}

uint32_t alu_or(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_or(src, dest, data_size);
#else
    uint32_t result;
    result = src | dest;
    
    cpu.eflags.CF = 0;
    cpu.eflags.OF = 0;
    set_PF(result);
    set_ZF(result, data_size);
    set_SF(result, data_size);
    
	return (0xFFFFFFFF>>(32-data_size)) & result;
#endif
}

uint32_t alu_shl(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_shl(src, dest, data_size);
#else
    uint32_t count = src;
    //uint32_t high_bit;
    
    dest = (0xFFFFFFFF>>(32-data_size)) & dest;
    while(count){
        if (data_size == 8) cpu.eflags.CF = ((dest & 0x80) != 0);
        else if (data_size == 16) cpu.eflags.CF = ((dest & 0x8000) != 0);
        else cpu.eflags.CF = ((dest & 0x80000000) != 0);
        dest = dest << 1;
        count--;
    }
    
    /*
    if (src == 1){
        high_bit = (dest >> (data_size - 1)) & 0x1;
        cpu.eflags.OF = (high_bit != cpu.eflags.CF);
    }
    */
	set_PF(dest);
    set_ZF(dest,data_size);
	set_SF(dest,data_size);
    
	return (0xFFFFFFFF>>(32-data_size)) & dest;
#endif
}

uint32_t alu_shr(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_shr(src, dest, data_size);
#else
    uint32_t count = src;
    
    dest = (0xFFFFFFFF>>(32-data_size)) & dest;
    while(count){
        cpu.eflags.CF = ((dest & 0x1) != 0);
        dest = dest >> 1;
        count--;
    }
    
    //if (src == 1)  cpu.eflags.OF = (dest >> (data_size - 1)) & 0x1;
	set_PF(dest);
    set_ZF(dest,data_size);
	set_SF(dest,data_size);
    
	return (0xFFFFFFFF>>(32-data_size)) & dest;
#endif
}

uint32_t alu_sar(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_sar(src, dest, data_size);
#else
    uint32_t count = src;

    dest = sign_ext((0xFFFFFFFF>>(32-data_size)) & dest, data_size);
    while(count){
        cpu.eflags.CF = ((dest & 0x1) != 0);
        if (sign(dest)) dest = 0x80000000 | (dest >> 1);
        else dest = dest >> 1;
        count--;
    }
    cpu.eflags.OF = 0;
    set_PF(dest);
    set_ZF(dest,data_size);
	set_SF(dest,data_size);
	return (0xFFFFFFFF>>(32-data_size)) & dest;
#endif
}

uint32_t alu_sal(uint32_t src, uint32_t dest, size_t data_size)
{
#ifdef NEMU_REF_ALU
	return __ref_alu_sal(src, dest, data_size);
#else
	return alu_shl(src, dest, data_size);
#endif
}
