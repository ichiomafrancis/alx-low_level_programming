#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: is one of the integers.
 * @b: is the other integer.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
