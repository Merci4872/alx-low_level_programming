#include <stdio.h>

void str_add(char num1[], char num2[], char result[])
{
    int i, carry = 0;
    for (i = 4999; i >= 0; i--)
    {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }
}

int main(void)
{
    char a[5000] = {'0'}, b[5000] = {'0'}, c[5000] = {'0'};
    int i;

    for (i = 0; i < 5000; i++)  // Initializing the strings with zeros
    {
        a[i] = '0';
        b[i] = '0';
        c[i] = '0';
    }

    a[4999] = '1';
    b[4999] = '2';

    printf("%s, %s", a, b);  // First two Fibonacci numbers

    for (i = 3; i <= 98; i++)
    {
        str_add(a, b, c);
        printf(", %s", c);

        // Shifting the sequence a <- b, b <- c
        for (int j = 0; j < 5000; j++)
        {
            a[j] = b[j];
            b[j] = c[j];
        }
    }
    printf("\n");
    return (0);
}

