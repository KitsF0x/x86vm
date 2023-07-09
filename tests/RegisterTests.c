#include "RegisterTests.h"

void test_register()
{
    Reg registerA;
    registerA.name = "Register A";
    set_reg_32(&registerA, 0x12345678);
    assert(get_reg_32(&registerA) == 0x12345678);

    set_reg_16(&registerA, 0xABCD);
    assert(get_reg_16(&registerA) == 0xABCD);

    set_reg_8_high(&registerA, 0xEF);
    assert(get_reg_8_high(&registerA) == 0xEF);

    set_reg_8_low(&registerA, 0x12);
    assert(get_reg_8_low(&registerA) == 0x12);

    printf("Done.\n");
}