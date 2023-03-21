#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that finds and prints the sum of the even-valued
 *terms, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a = 0, b = 1, sum, fib_sum = 0;

	for (n = 0; n < 34; n++)
	{
		sum = a + b;

		if (sum % 2 == 0 && sum < 4000000)
		{
			fib_sum = fib_sum + sum;
		}

		a = b;
		b = sum;
	}

	printf("%d", fib_sum);
	printf("\n");

	return (0);
}
