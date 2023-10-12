#include "variadic_functions.h"

/**
* print_numbers - prints numbers.
* @separator: string to be printed between numbers
* @n: number of integers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int value;

va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, int);
printf("%d", value);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

