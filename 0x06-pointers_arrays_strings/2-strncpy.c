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
	int i = 0;
	int j = 0;

	while (i != n)
	{
		dest[j] = src[i];
		j++;
		i++;
		if (src[i] == '\0')
		{
			break;
		}
	}
	while (j != n)
		dest[j++] = '\0';

	return (dest);
}

