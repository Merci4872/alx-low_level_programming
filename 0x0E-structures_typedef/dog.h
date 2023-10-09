#ifndef DOG_H
#define DOG_H

/**
* struct dog - Description of a dog
* @name: The dog's name
* @age: The dog's age
* @owner: The dog's owner
*
* Description: A structure that contains information about a dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

