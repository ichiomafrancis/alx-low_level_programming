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

	for (n = 0; n < 98; n++)
	{
		sum = a + b;
		printf("%lu", sum);

		if (n == 97)
			continue;

		printf(",");
		printf(" ");

		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
