#include <stdio.h>

/**
 * main - Entry point
 *
 * Print only the smallest combination of three different digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, val, digit;

	for (num = 0; num < 10; num++)
		for (val = 0; val < 10; val++)
			for (digit = 0; digit < 10; digit++)
			{
				if (num < val && val < digit)
				{
					putchar((num % 10) + '0');
					putchar((val % 10) + '0');
					putchar((digit % 10) + '0');

					if (num == 7 && val == 8 && digit == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');

	return (0);
}
