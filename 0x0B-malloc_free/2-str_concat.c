#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: string one.
* @s2: string two.
*
* Return: pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int idx, concat_idx = 0, len = 0;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

while (s1[len])
len++;

while (s2[len - concat_idx])
len++;

concat_str = malloc(sizeof(char) * (len + 1));

if (!concat_str)
return (NULL);

for (idx = 0; s1[idx]; idx++)
concat_str[concat_idx++] = s1[idx];

for (idx = 0; s2[idx]; idx++)
concat_str[concat_idx++] = s2[idx];

concat_str[len] = '\0';

return (concat_str);
}

