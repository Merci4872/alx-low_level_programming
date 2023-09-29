#include <stdio.h>

/**
* main - Entry point of the program.
* Prints all the arguments it receives.
*
* @argc: Count of arguments including the name of the program.
* @argv: Array of character pointers listing all the arguments.
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;  /* Declare the loop variable outside the loop */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

