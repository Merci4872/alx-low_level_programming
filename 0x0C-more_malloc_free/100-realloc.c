#include "main.h"
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block.
* @ptr: Old pointer.
* @old_size: Size of the allocated space for ptr.
* @new_size: New size for the new memory block.
* Return: Pointer to the reallocated memory.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr = ptr;
unsigned int i, limit;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

limit = (old_size < new_size) ? old_size : new_size;

for (i = 0; i < limit; i++)
new_ptr[i] = old_ptr[i];

free(ptr);
return (new_ptr);
}

