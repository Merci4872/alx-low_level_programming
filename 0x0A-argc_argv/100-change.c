#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point. Calculates the minimum number of coins for given amount.
*
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if success, 1 if an error occurs.
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;
int i;
int denominations[5];

/* If  argument count is not 2 (program name + 1 argument), print an error */
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]); /* Convert the argument to an integer */

/* If the cents value is negative, print 0 and exit */
if (cents < 0)
{
printf("0\n");
return (0);
}

denominations[0] = 25;
denominations[1] = 10;
denominations[2] = 5;
denominations[3] = 2;
denominations[4] = 1; /* Coin values */

/* Calculate the minimum number of coins needed */
for (i = 0; i < 5 && cents > 0; i++)
{
coins += cents / denominations[i];
cents %= denominations[i];
}

/* Print the result */
printf("%d\n", coins);
return (0);
}

