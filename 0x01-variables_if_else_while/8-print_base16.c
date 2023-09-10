#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num_or_letter;

	for (num_or_letter = '0'; num_or_letter <= '9'; num_or_letter++)
	{
		putchar(num_or_letter);
	}
	for (num_or_letter = 'a'; num_or_letter <= 'f'; num_or_letter++)
	{
		putchar(num_or_letter);
	}
	putchar('\n');

	return (0);
}

