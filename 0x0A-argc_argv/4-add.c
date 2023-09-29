#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point. Adds positive numbers passed as arguments.
*
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if success,
* 1 if any of the numbers contains symbols that are not digits.
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i, j; /* Declare loop variables outside the loops */

/* Iterate over each argument */
for (i = 1; i < argc; i++)
{
/* Check each character in the argument */
for (j = 0; argv[i][j] != '\0'; j++)
{
/* If character is not a digit, print Error and exit with return value 1 */
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
/* Convert the valid number from string to integer and add to sum */
sum += atoi(argv[i]);
}

/* Print the final sum */
printf("%d\n", sum);
return (0);
}

