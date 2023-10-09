#include "dog.h"

/**
* init_dog - Initialize a struct dog
* @d: Pointer to a struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* This function initializes a struct dog with the given parameters.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

