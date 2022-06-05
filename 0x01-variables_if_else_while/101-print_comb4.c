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
	int num, val, dig;

	for (num = 0; num < 10; num++)
		for (val = 0; val < 10; val++)
			for (dig = 0; dig < 10; dig++)
			{
				if (num < val && val < dig)
				{
					putchar((num % 10) + '0');
					putchar((val % 10) + '0');
					putchar((dig % 10) + '0');

					if (num == 7 && val == 8 && dig == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');

	return (0);
}


