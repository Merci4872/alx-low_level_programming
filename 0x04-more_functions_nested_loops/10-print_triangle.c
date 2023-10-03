#include "main.h"

/**
* print_triangle - Prints a triangle of a given size.
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
int i, j, spaces;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
/* Print spaces. Number of spaces decreases with each row. */
for (spaces = 1; spaces <= size - i; spaces++)
{
_putchar(' ');
}

/* Print '#' characters. Number of '#' increases with each row. */
for (j = 1; j <= i; j++)
{
_putchar('#');
}

/* Move to the next line after completing a row. */
_putchar('\n');
}
}

