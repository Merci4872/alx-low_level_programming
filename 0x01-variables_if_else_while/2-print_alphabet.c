#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase using only `putchar` function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

