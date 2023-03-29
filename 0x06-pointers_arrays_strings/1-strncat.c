#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 *
 * @dest: the string destination.
 * @src: the string source to be concatenated.
 * @n: no of bytes to be allowed for src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
