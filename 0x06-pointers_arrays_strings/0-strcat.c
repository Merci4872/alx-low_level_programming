#include "main.h"

/**
* _strcat - Appends the string pointed to by src to the end of dest string.
* @dest: The destination string, with enough space for the result.
* @src: The source string to append to dest.
*
* Return: Pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* Find the end of the dest string. */
while (dest[i] != '\0')
{
i++;
}

/* Append the src string. */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Terminate the dest string. */
dest[i] = '\0';

return (dest);
}

