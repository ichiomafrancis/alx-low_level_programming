#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @n: no of bytes of memory to be filled
 * @s: buffer array
 * @b: constant byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
