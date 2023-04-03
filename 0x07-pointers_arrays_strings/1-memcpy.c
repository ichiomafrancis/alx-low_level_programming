#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory
 *area src to memory area dest
 *
 * @n: the no of bytes to be copied
 * @src: the memory area to copy from
 * @dest: the memory area to be copied to
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d;

	d = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (d);
}
