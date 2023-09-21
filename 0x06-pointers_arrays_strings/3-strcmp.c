#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: The first string to be compared.
* @s2: The second string to be compared.
*
* Return:
*  > 0 if s1 > s2
*  < 0 if s1 < s2
*  = 0 if s1 is equal to s2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return ((int)(*s1 - *s2));
}

