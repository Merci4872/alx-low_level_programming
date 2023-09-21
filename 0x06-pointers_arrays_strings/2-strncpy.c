#include "main.h"

/**
* _strncpy - Copies at most n bytes of the string pointed to by src,
*           including the terminating null byte, to the buffer pointed
*           to by dest.
* @dest: The destination buffer.
* @src: The source string.
* @n: The maximum number of bytes to copy.
*
* Return: Pointer to the destination string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Fill the rest of the buffer with '\0' if src has less than n bytes. */
for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

