#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, ten times
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++) /* Loop to print the sequence 10 times */
{
for (j = 0; j <= 14; j++) /* Loop for numbers from 0 to 14 */
{
if (j > 9)
{
_putchar(j / 10 + '0'); /* First digit for two-digit numbers */
}
_putchar(j % 10 + '0'); /* Second digit or single-digit numbers */
}
_putchar('\n');
}
}

