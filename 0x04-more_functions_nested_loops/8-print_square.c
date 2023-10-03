#include "main.h"

/**
* print_square - Prints a square of a given size.
* @size: The size of the square.
*/
void print_square(int size)
{
int i, j;

/* If size is 0 or negative, print only a newline */
if (size <= 0)
{
_putchar('\n');
return;
}

/* Loop for each row */
for (i = 0; i < size; i++)
{
/* Loop for each column */
for (j = 0; j < size; j++)
{
_putchar('#');
}
/* Move to the next line after completing a row */
_putchar('\n');
}
}

