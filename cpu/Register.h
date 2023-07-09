#pragma once

#include <stdint.h>

typedef struct Reg
{
    uint32_t value;
    char *name;
} Reg;

extern void set_reg_32(Reg *reg, uint32_t value);
extern void set_reg_16(Reg *reg, uint16_t value);
extern void set_reg_8_high(Reg *reg, uint8_t value);
extern void set_reg_8_low(Reg *reg, uint8_t value);

extern uint32_t get_reg_32(Reg *reg);
extern uint16_t get_reg_16(Reg *reg);
extern uint8_t get_reg_8_high(Reg *reg);
extern uint8_t get_reg_8_low(Reg *reg);