#include <stdio.h>

/**
* reset_to_98 - Updates the value of an int to 98.
* @n: Pointer to an integer.
*/
void reset_to_98(int *n)
{
*n = 98;
}

/**
* main - Entry point of the program.
* Return: (0) Always success.
*/
int main(void)
{
int value = 42;
printf("Before: %d\n", value);
reset_to_98(&value);
printf("After: %d\n", value);

return (0);
}
}

