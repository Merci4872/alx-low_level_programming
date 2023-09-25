#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the string to be scanned
* @needle: the string to be searched with
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, start;

if (*needle == 0)
return (haystack);

for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
start = i;
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[start]);
}
}
return (NULL);
}

