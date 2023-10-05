#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Multiplies two positive numbers.
* @argc: Number of arguments.
* @argv: Argument vector.
* Return: 0 on success, 98 on failure.
*/
int main(int argc, char *argv[])
{
long num1, num2, result;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = atol(argv[1]);
num2 = atol(argv[2]);

if (num1 == 0 || num2 == 0 || !num1 || !num2)
{
printf("Error\n");
exit(98);
}

result = num1 *num2;
printf("%ld\n", result);

return (0);
}

