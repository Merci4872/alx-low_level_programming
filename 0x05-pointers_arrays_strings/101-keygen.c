#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generate random passwords until they sum 2772
* Return: Always 0.
*/
int main(void)
{
int sum = 0, n;

srand(time(NULL));

while (sum < 2772 - 127)  /* Maximum value for an ASCII char is 127 */
{
n = rand() % 127;  /* ASCII range */
if (n > 32)  /* Printable characters start from 33 */
{
putchar(n);
sum += n;
}
}
putchar(2772 - sum);  /* The remaining value to reach 2772 */

return (0);
}

