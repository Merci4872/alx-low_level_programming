#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
char *str1 = "and that piece of art is useful\" - ";
char *str2 = "Dora Korpar, 2015-10-19\n";

write(2, str1, 34);  /* Length of str1 */
write(2, str2, 25);  /* Length of str2 */
return (1);
}

