#include "main.h"

/**
* argstostr - concatenates all the arguments of your program.
* @ac: argument count.
* @av: argument vector.
*
* Return: pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
char *new_str, *ch_ptr;
int arg, byte, total_bytes = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
total_bytes++;
total_bytes++;
}
total_bytes++;

new_str = malloc(total_bytes);
if (!new_str)
return (NULL);

ch_ptr = new_str;
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
*ch_ptr++ = av[arg][byte];
*ch_ptr++ = '\n';
}
*ch_ptr = '\0';

return (new_str);
}

