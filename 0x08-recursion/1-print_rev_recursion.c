#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse.
* @s: The string to be printed in reverse.
*/
void _print_rev_recursion(char *s)
{
/* If the current character isn't the end of the string */
if (*s)
{
/* Recursively call the function with the next character */
_print_rev_recursion(s + 1);
/* Print the current character */
_putchar(*s);
}
}

