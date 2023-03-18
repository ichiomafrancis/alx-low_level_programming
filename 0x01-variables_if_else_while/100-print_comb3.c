#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, val;

	for (num = 0; num < 10; num++)
		for (val = 0; val < 10; val++)
		{
			if (num < val)
			{
				putchar((num % 10) + '0');
				putchar((val % 10) + '0');

				if (num == 8 && val == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');

	return (0);
}
