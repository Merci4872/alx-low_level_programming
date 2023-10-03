#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to be printed
*
* Return: void
*/

void print_number(int n)
{
/* If the number is negative, print a '-' and work with its absolute value */
if (n < 0)
{
_putchar('-');
n = -n;
}

/* Use recursion to break the number down */
if (n / 10)
{
print_number(n / 10);
}

_putchar((n % 10) + '0');
}

