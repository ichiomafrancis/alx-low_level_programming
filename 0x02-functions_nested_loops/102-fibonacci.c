#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long a = 0, b = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = a + b;
		if (n < 49)
			printf("%lu, ", sum);

		else
			printf("%lu", sum);

		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
