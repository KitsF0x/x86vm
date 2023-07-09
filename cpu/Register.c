#include "Register.h"

// Setters
void set_reg_32(Reg *reg, uint32_t value)
{
    reg->value = value;
}

void set_reg_16(Reg *reg, uint16_t value)
{
    reg->value = (reg->value & 0xFFFF0000) | value;
}

void set_reg_8_high(Reg *reg, uint8_t value)
{
    reg->value = (reg->value & 0xFFFF00FF) | (value << 8);
}

void set_reg_8_low(Reg *reg, uint8_t value)
{
    reg->value = (reg->value & 0xFFFFFF00) | value;
}

// Getters
uint32_t get_reg_32(Reg *reg)
{
    return reg->value;
}

uint16_t get_reg_16(Reg *reg)
{
    return reg->value & 0xFFFF;
}

uint8_t get_reg_8_high(Reg *reg)
{
    return (reg->value >> 8) & 0xFF;
}

uint8_t get_reg_8_low(Reg *reg)
{
    return reg->value & 0xFF;
}
