#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	unsigned long fiba = 0, fibb = 1, sum;
	unsigned long fiba_half1, fiba_half2, fibb_half1, fibb_half2;
	unsigned long half1, half2;

	for (n = 0; n < 92; n++)
	{
		sum = fiba + fibb;
		printf("%lu, ", sum);

		fiba = fibb;
		fibb = sum;
	}
	fiba_half1 = fiba / 10000000000;
	fibb_half1 = fibb / 10000000000;
	fiba_half2 = fiba % 10000000000;
	fibb_half2 = fibb % 10000000000;

	for (n = 93; n < 99; n++)
	{
		half1 = fiba_half1 + fibb_half1;
		half2 = fiba_half2 + fibb_half2;
		if (half2 > 9999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (n == 98)
			continue;

		printf(", ");

		fiba_half1 = fibb_half1;
		fiba_half2 = fibb_half2;
		fibb_half1 = half1;
		fibb_half2 = half2;
	}
	printf("\n");
	return (0);
}
