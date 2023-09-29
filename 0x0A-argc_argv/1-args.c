#include <stdio.h>

/**
* main - prints the number of arguments passed to it
* @argc: argument count
* @argv: argument vector (unused in this case)
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argv;  /* to avoid unused variable warning */
printf("%d\n", argc - 1);
return (0);
}

