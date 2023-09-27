#include "main.h"

/**
* sqrt_helper - Helper function to determine the natural square root.
* @n: The number.
* @i: The current iteration (starting from 1).
*
* Return: The natural square root of n, or -1 if n has no natural square root.
*/
int sqrt_helper(int n, int i)
{
/* If i * i is n, i is the square root of n */
if (i * i == n)
return (i);

/* If i * i is greater than n, n does not have a natural square root */
if (i * i > n)
return (-1);

/* Otherwise, check the next iteration */
return (sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number.
*
* Return: The natural square root of n, or -1 if n has no natural square root.
*/
int _sqrt_recursion(int n)
{
/* If n is negative, return -1 */
if (n < 0)
return (-1);

/* Utilize the helper function starting with iteration 1 */
return (sqrt_helper(n, 1));
}

