#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Creates a new struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the new struct dog.
* This function dynamically allocates memory for a new struct dog
* and initializes it with the provided parameters.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;

dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);

name_copy = strdup(name);
if (!name_copy)
{
free(dog);
return (NULL);
}

owner_copy = strdup(owner);
if (!owner_copy)
{
free(name_copy);
free(dog);
return (NULL);
}

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog);
}

