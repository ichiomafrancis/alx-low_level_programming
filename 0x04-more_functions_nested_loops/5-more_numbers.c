#include "main.h"


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *followed by a new line.
 */
void more_numbers(void)
{
	int count = 0, num;

	while (count <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}

