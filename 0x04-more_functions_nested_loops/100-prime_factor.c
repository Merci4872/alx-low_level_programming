#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
long num = 612852475143;
long divisor = 2, maxPrime = -1;

while (num % divisor == 0)
{
maxPrime = divisor;
num /= divisor;
}

divisor = 3;
while (num != 1 && divisor <= sqrt(num))
{
while (num % divisor == 0)
{
maxPrime = divisor;
num /= divisor;
}
divisor += 2; /* Increase the divisor by 2 for,
efficiency (only checking odd numbers)*/
}

if (num > 2)  /* If the remaining number,
is a prime greater than the last divisor
maxPrime = num; */

printf("%ld\n", maxPrime);

return (0);
}

