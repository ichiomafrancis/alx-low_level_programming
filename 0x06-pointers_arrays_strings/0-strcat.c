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
	int i;

	for (i = 0; str[i]; i++)
		dest += str[i];

	return (dest);
}

