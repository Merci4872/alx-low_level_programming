#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point.
* @argc: argument count.
* @argv: argument vector.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int bytes, i;
char *func_ptr = (char *)main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < bytes; i++)
{
printf("%02hhx", func_ptr[i]);
if (i < bytes - 1)
printf(" ");
else
printf("\n");
}

return (0);
}

