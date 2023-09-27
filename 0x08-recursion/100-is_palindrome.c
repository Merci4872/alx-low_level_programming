/**
* is_prime_number - Returns 1 if the input integer is a prime number,
* otherwise return 0.
*
* @n: The number to check.
*
* Return: 1 if n is prime, otherwise 0.
*/
int is_prime_number(int n)
{
/*
* If n is less than 2, it's not prime
*/
if (n < 2)
return (0);

/*
* Start checking for prime using the helper function,
* starting with divisor 2
*/
return (check_prime(n, 2));
}

