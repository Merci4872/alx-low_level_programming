#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: Size of memory to be allocated.
* Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

/* Force an exit if b is equal to the maximum value for unsigned int */
if (b == UINT_MAX)
exit(98);

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}

