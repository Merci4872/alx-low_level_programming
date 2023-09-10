#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to the variable n each time
 *        it is executed. Prints whether the number stored in the
 *        variable n is positive or negative.
 *
 * Description: Uses the rand and srand functions to assign a random
 *              value to the variable n and then checks if this value is
 *              positive, negative, or zero, printing the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the number */
	printf("%d ", n);

	/* Determine if the number is positive, negative, or zero */
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

	return (0);
}

