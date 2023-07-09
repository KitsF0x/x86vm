#include "NumberBaseFormatter.h"

char *get_binary_string_from_number(uint32_t value)
{
    int num_bits = sizeof(value) * 8;
    char *binary_string = (char *)malloc(num_bits + 1);

    if (binary_string == NULL)
    {
        return NULL;
    }

    for (int i = num_bits - 1; i >= 0; i--)
    {
        binary_string[i] = (value & 1) ? '1' : '0';
        value >>= 1;
    }

    binary_string[num_bits] = '\0';

    return binary_string;
}