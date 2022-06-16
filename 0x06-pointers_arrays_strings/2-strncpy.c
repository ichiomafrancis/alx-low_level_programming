#include "main.h"

/**
 * _strncopy - Function that copies two string.
 *
 * @dest: the string destination.
 * @src: the string.
 * @n: no of bytes to be allowed for src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncopy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

