#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point. Multiplies two numbers passed as arguments.
*
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if success, 1 if the program does not receive two arguments.
*/
int main(int argc, char *argv[])
{
/* If there are exactly 3 arguments (program name + 2 numbers) */
if (argc == 3)
{
/* Convert strings to integers and print their product */
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
/* If the number of arguments is not 3, print an error message */
printf("Error\n");
return (1);
}

return (0);
}

