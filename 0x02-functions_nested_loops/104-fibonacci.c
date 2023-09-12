#include "main.h"
#include <stdio.h>

/**
 * add_strings - adds two numbers represented as strings.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store result.
 */
void add_strings(char n1[5000], char n2[5000], char r[5000])
{
	int i, carry = 0;

	for (i = 0; i < 5000; i++)
		r[i] = '0';

	for (i = 4999; i >= 0; i--)
	{
		int num = (n1[i] - '0') + (n2[i] - '0') + carry;
		r[i] = (num % 10) + '0';
		carry = num / 10;
	}
}

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char fib1[5000] = {0}, fib2[5000] = {0}, result[5000] = {0};

	for (i = 0; i < 5000; i++)
	{
		fib1[i] = fib2[i] = '0';
	}
	fib2[4999] = '1';

	printf("%s, %s", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		add_strings(fib1, fib2, result);
		printf(", %s", result);

		/* Move to next Fibonacci terms */
		for (int j = 0; j < 5000; j++)
		{
			fib1[j] = fib2[j];
			fib2[j] = result[j];
		}
	}
	printf("\n");
	return (0);
}

