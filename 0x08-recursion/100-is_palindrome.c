#include "main.h"

/**
* _strlen_recursion - find the length of a string.
* @s: string to check.
*
* Return: length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* helper_palindrome - recursive helper function to check palindrome.
* @s: string to check.
* @len: length of the string.
*
* Return: 1 if palindrome, otherwise 0.
*/
int helper_palindrome(char *s, int len)
{
if (len <= 1)
return (1);
if (*s != s[len - 1])
return (0);
return (helper_palindrome(s + 1, len - 2));
}

/**
* is_palindrome - checks if a string is a palindrome.
* @s: string to check.
*
* Return: 1 if palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (helper_palindrome(s, len));
}

