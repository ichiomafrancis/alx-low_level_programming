#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lower case except letters q and  e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
