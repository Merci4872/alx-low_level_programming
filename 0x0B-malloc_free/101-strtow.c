#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* wordcount - counts words in a string
* @str: string to count words in
*
* Return: number of words in the string
*/
int wordcount(char *str)
{
int count = 0, inword = 0;

while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
inword = 0;
}
else if (!inword)
{
inword = 1;
count++;
}
str++;
}

return (count);
}

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: array of words
*/
char **strtow(char *str)
{
int i = 0, j = 0, k, l;
int wc = wordcount(str);
char **words;

if (!str || !*str || wc == 0)
return (NULL);

words = malloc((wc + 1) * sizeof(char *));
if (!words)
return (NULL);

while (i < wc)
{
while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
j++;

l = j;
while (str[l] != ' ' && str[l] != '\t' && str[l] != '\n' && str[l] != '\0')
l++;

words[i] = malloc((l - j + 1) * sizeof(char));
if (!words[i])
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}

for (k = 0; j < l; j++, k++)
words[i][k] = str[j];
words[i][k] = '\0';
i++;
}
words[i] = NULL;

return (words);
}

