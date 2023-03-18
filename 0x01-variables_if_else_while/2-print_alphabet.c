#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
