#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the string to be searched
* @c: the character to search for
*
* Return: pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}

