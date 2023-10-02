#include <string.h>
#include "main.h"

/**
* wordcount - counts the number of words in a string.
* @str: the string.
*
* Return: number of words.
*/
int wordcount(char *str)
{
int i, wc = 0;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
wc++;
while (str[i] && str[i] != ' ')
i++;
}
}

return (wc);
}

/**
* strtow - splits a string into words.
* @str: the string.
*
* Return: pointer to the array of words.
*/
char **strtow(char *str)
{
char **words, *token;
int wc, i = 0;

if (!str || !*str)
return (NULL);

wc = wordcount(str);
if (wc == 0)
return (NULL);

words = malloc(sizeof(char *) * (wc + 1));
if (!words)
return (NULL);

token = strtok(str, " ");
while (token)
{
words[i] = strdup(token);
if (!words[i])
{
while (i >= 0)
free(words[--i]);
free(words);
return (NULL);
}
i++;
token = strtok(NULL, " ");
}
words[i] = NULL;

return (words);
}

