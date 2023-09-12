int main(void)
{
	int i, j;  // Declare the j variable here
	char fib1[5000] = {0}, fib2[5000] = {0}, result[5000] = {0};

	for (i = 0; i < 5000; i++)
	{
		fib1[i] = fib2[i] = '0';
	}
	fib2[4999] = '1';

	printf("%s, %s", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		add_strings(fib1, fib2, result);
		printf(", %s", result);

		/* Move to next Fibonacci terms */
		for (j = 0; j < 5000; j++)   // Now, the loop uses the already declared j
		{
			fib1[j] = fib2[j];
			fib2[j] = result[j];
		}
	}
	printf("\n");
	return (0);
}

