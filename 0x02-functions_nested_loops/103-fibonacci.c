#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in
 * the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0, temp;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
			sum += fib2;

		temp = fib1 + fib2;
		fib1 = fib2;
		fib2 = temp;
	}

	printf("%lu\n", sum);

	return (0);
}

