/**
* leet - encodes a string into 1337.
* @str: the string to be encoded.
*
* Return: the encoded string.
*/
char *leet(char *str)
{
int i, j;
char leet_chars[] = "aAeEoOtTlL";
char replace_chars[] = "4300430711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = replace_chars[j];
break;  /* Exit the inner loop once a match is found. */
}
}
}

return (str);
}

