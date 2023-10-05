#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes of s2 to be concatenated.
* Return: Pointer to the concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2] && len2 < n)
len2++;

concat = malloc(len1 + len2 + 1);
if (!concat)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; i++, j++)
concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}

