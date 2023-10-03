#include "main.h"

/**
* print_diagonal - Draws a diagonal line using the backslash character.
* @n: The number of backslashes to be printed.
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
/* Note: A double backslash is used to represent a single backslash in C */
_putchar('\\');
_putchar('\n');
}
}

