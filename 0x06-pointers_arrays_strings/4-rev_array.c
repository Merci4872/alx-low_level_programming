#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array to be reversed.
* @n: The number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int i = 0, temp;

n = n - 1;  /* Adjusting for 0-based indexing. */

while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}

