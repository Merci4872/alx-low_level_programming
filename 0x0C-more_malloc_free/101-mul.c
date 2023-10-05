#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Multiplies two positive numbers.
* @argc: Number of arguments.
* @argv: Argument vector.
* Return: 0 on success, 98 on failure.
*/
int main(int argc, char *argv[])
{
char *num1, *num2;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
{
printf("Error\n");
exit(98);
}

/* Multiply and print the result */
multiply_and_print(num1, num2);

return (0);
}

/**
* is_digit - Check if a string is a number.
* @num: String to be checked.
* Return: 1 if number, 0 otherwise.
*/
int is_digit(char *num)
{
if (*num == '\0')
return (0);
while (*num)
{
if (*num < '0' || *num > '9')
return (0);
num++;
}
return (1);
}

/**
* multiply_and_print - Multiplies two strings and print the result.
* @num1: First number.
* @num2: Second number.
*/
void multiply_and_print(char *num1, char *num2)
{
int len1 = strlen(num1), len2 = strlen(num2);
int *result = calloc(len1 + len2, sizeof(int));
int i, j, carry = 0, n;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
n = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
carry = n / 10;
result[i + j + 1] = n % 10;
}
result[i + j + 1] += carry;
}

/* Print result */
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

if (i == len1 + len2)
printf("0");
else
for (; i < len1 + len2; i++)
printf("%d", result[i]);

printf("\n");
free(result);
}

