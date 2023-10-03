#include <stdio.h>

/**
* main - FizzBuzz problem
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}

/* Add space if not the last iteration, else add a new line */
if (i != 100)
printf(" ");
else
printf("\n");
}

return (0);
}

