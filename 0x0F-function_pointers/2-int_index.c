#include "function_pointers.h"

/**
* int_index - searches for an integer in an array.
* @array: input array.
* @size: size of the array.
* @cmp: pointer to function.
*
* Return: index of first match, -1 if none or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}

