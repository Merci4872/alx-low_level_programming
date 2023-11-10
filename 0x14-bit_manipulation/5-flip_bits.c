#include "main.h"
#include <stddef.h>

/**
* flip_bits - Return the number of bits to flip to get from 1 number to another
* @n: First number
* @m: Second number
* Return: Number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor_result = n ^ m;

while (xor_result)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}

