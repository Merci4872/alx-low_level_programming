#include "main.h"
#include <stddef.h>

/**
* get_endianness - Checks the endianness
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int num = 1;
char *endian = (char *)&num;

return (*endian);
}

