#include "main.h"

/**
 * _strlen - function that returns the length
 *of a string.
 *
 * @s : the string whose length we need
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}

	return (count);
}
