#include "main.h"

/**
* is_separator - checks if a character is a separator.
* @c: The character to check.
*
* Return: 1 if character is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i]; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to modify.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

/* Ensure the first character is capitalized if it's a letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';

i++;

while (str[i])
{
/* If the character is a lowercase letter and previous char is separator */
if (str[i] >= 'a' && str[i] <= 'z' && is_separator(str[i - 1]))
{
str[i] = str[i] - 'a' + 'A';
}
i++;
}

return (str);
}

