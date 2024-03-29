#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *of a string to uppercase.
 *
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int i = 0;
	int delt = 'a' - 'A';

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= delt;
		i++;
	}

	return (str);
}
