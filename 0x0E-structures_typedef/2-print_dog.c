#include "dog.h"
#include <stdio.h>

/**
* print_dog - Print members of a struct dog
* @d: Pointer to struct dog
*
* This function prints the members of struct dog.
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}

