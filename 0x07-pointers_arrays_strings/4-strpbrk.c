#include "main.h"

/**
* _strpbrk - locates the first occurrence in the string s
* of any of the bytes in the string accept
* @s: the string to be scanned
* @accept: the string containing the list of characters to match in s
*
* Return: pointer to the byte in s that matches one of the
* bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}

