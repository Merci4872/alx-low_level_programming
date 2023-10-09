#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees a struct dog
* @d: Pointer to struct dog
*
* This function frees the memory used by a struct dog.
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

