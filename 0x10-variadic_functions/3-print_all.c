#include "variadic_functions.h"

/**
* print_all - prints anything.
* @format: list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
va_list args;
char *s;
int i = 0;
char form;

va_start(args, format);
while (format && format[i])
{
form = format[i];
switch (form)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char*);
if (!s)
s = "(nil)";
printf("%s", s);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");
i++;
}
printf("\n");
va_end(args);
}

