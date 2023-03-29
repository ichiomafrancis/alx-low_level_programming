#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 *
 * @dest: the string destination.
 * @src: the string source to be concatenated.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
