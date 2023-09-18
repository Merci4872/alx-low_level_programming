#include "main.h"

/**
* _strcpy - Copies the string pointed to by src to dest.
* @dest: Destination buffer.
* @src: Source string.
*
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Copy string including null terminator */
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

