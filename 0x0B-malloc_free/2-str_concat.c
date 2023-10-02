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
int len_s1 = 0, len_s2 = 0, idx, concat_idx = 0;

if (!s1)
s1 = "";
if (!s2)
s2 = "";

/* calculate length of s1 */
while (s1[len_s1])
len_s1++;

/* calculate length of s2 */
while (s2[len_s2])
len_s2++;

/* allocate memory for concatenated string */
concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

if (!concat_str)
return (NULL);

/* copy s1 to concat_str */
for (idx = 0; idx < len_s1; idx++)
concat_str[concat_idx++] = s1[idx];

/* copy s2 to concat_str */
for (idx = 0; idx < len_s2; idx++)
concat_str[concat_idx++] = s2[idx];

concat_str[concat_idx] = '\0';

return (concat_str);
}

