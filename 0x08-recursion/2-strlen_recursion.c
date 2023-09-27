#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string whose length is to be found.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
/* Base case: If the current character is the null terminator */
if (*s == '\0')
return 0;

/* Recursive case: Move to the next character and add 1 to the result */
return 1 + _strlen_recursion(s + 1);
}

