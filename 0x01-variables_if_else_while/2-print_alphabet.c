#include <stdio>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar ("%c", ch);
		putchar ("\n");
	}

	return (0);
}

