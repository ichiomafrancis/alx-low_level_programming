#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, val;

	for (num = 0; num < 100; num++)
		for (val = 0; val < 100; val++)
			if (num < val)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
				putchar(' ');
				putchar((val / 10) + '0');
				putchar((val % 10) + '0');

				if (num == 98 && val == 99)
					continue;

				putchar(',');
				putchar(' ');
			}

	putchar('\n');

	return (0);
}
