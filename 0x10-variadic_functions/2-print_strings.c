#include "variadic_functions.h"

/**
* print_strings - prints strings.
* @separator: string to be printed between the strings
* @n: number of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *value;

va_start(args, n);
for (i = 0; i < n; i++)
{
value = va_arg(args, char*);
if (value != NULL)
printf("%s", value);
else
printf("(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

