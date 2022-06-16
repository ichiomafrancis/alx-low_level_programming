#include "main.h"

/**
 * _strncpy - Function that copies two string.
 *
 * @dest: the string destination.
 * @src: the string.
 * @n: no of bytes to be allowed for src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

