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

/* Define the new type */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

