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

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = dest[i];
	for (j = 0; str[j] != '\0'; j++)
		dest[i] = str[j];
	dest[i] = '\0';

	return (dest);
}

