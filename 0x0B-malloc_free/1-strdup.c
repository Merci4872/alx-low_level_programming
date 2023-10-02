#include "main.h"

/**
* _strdup - duplicates a string.
* @str: string to be duplicated.
*
* Return: pointer to the duplicated string.
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (!str)
return (NULL);

/* calculate length */
while (str[len])
len++;

/* allocate memory */
dup = malloc(sizeof(char) * (len + 1));
if (!dup)
return (NULL);

/* copy characters */
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return (dup);
}

