#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @n: The number to compute the factorial for.
*
* Return: The factorial of the number, or -1 if n is negative.
*/
int factorial(int n)
{
/* If the number is negative, return -1 to indicate an error */
if (n < 0)
return (-1);

/* Base case: Factorial of 0 is 1 */
if (n == 0)
return (1);

/* Recursive case: n times factorial of (n-1) */
return (n * factorial(n - 1));
}

