#include "main.h"

/**
* check_prime - Helper function to check if a number is prime.
* @n: The number to check.
* @i: The current divisor being checked.
*
* Return: 1 if n is prime, otherwise 0.
*/
int check_prime(int n, int i)
{
/* If i squared is greater than n, then n is prime */
if (i * i > n)
return (1);

/* If n is divisible by i, then n is not prime */
if (n % i == 0)
return (0);

/* Recursive case */
return (check_prime(n, i + 1));
}

/**
* is_prime_number - Returns 1 if the input integer is a prime number,
* otherwise return 0.
* @n: The number to check.
*
* Return: 1 if n is prime, otherwise 0.
*/
int is_prime_number(int n)
{
/* If n is less than 2, it's not prime */
if (n < 2)
return (0);

/*
 * Start checking for prime using the helper function,
 * starting with divisor 2
 */
return (check_prime(n, 2));
}

