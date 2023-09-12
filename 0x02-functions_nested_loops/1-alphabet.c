#include <stdio.h>

/**
 * _putchar - Write a character to stdout.
 * @c: The character to be printed.
 * Return: 1 on success. On error, -1 and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
 * main - Entry point for the program.
 * Return: 0 on success.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

