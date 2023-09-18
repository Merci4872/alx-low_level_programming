#include "main.h"

/**
* puts_half - Prints the second half of a string.
* @str: The string to process.
*/
void puts_half(char *str)
{
int length = 0, n, i;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine the starting point for printing */
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length - 1) / 2;
}

/* Print the second half of the string */
for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

