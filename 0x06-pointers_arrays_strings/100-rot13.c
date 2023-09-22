#include "main.h"

/**
* rot13 - encode a string using rot13.
* @s: string to encode.
* 
* Return: encoded string.
*/
char *rot13(char *s)
{
int i, j;
char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i]; i++)
{
for (j = 0; original[j]; j++)
{
if (s[i] == original[j])
{
s[i] = encoded[j];
break;
}
}
}

return s;
}

