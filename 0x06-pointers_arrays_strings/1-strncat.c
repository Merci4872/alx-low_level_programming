#include "main.h"

/**
* _strncat - Concatenates up to n characters from the string pointed to by src
*           to the end of the string pointed to by dest.
* @dest: The destination string, with enough space for the result.
* @src: The source string to append to dest.
* @n: The maximum number of characters to append.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* Find the end of the dest string. */
while (dest[i] != '\0')
{
i++;
}

/* Append n bytes or until src[j] isn't '\0'. */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* If src has less than n bytes, we add the null terminator. */
if (j < n)
{
dest[i] = '\0';
}

return (dest);
}


