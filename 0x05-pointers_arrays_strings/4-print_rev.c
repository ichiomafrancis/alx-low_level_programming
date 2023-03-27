#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 *@s: the string to be printed
 */
void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len += 1;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
