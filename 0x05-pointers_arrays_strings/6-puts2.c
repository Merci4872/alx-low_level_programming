#include "main.h"

/**
* puts2 - Prints every other character of a string.
* @str: The string to process.
*/
void puts2(char *str)
{
int i = 0;

while (str[i])
{
if (i % 2 == 0)
{
/* Check if the index is even */
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}


