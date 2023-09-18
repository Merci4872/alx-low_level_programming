#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
* 
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int result = 0;  /* To store the integer value */
int sign = 1;    /* To handle positive and negative numbers */
int flag = 0;    /* To indicate if a number has been found */

while (*s)
{
if (*s == '-')
{
sign *= -1;  /* Toggle the sign */
}
else if (*s >= '0' && *s <= '9')
{
flag = 1;  /* Number found */
result = result * 10 + (*s - '0');
}
else if (flag)  /* If a character is found after numbers, break */
{
break;
}
s++;
}

return result * sign;
}

