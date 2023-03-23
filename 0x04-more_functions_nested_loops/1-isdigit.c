#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * from 0 to 9 inclusive
 *
 * @c: int type number to be checked
 *
 * Return: 1 if successful, else 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
