#include "main.h"

/**
 * print_numbers - a function that prints the
 * numbers, from 0 t0 9
 *
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
