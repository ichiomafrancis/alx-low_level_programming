#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Print number stored in variable n - Positive or Negative
 *
 * Return = 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	}
		printf(n, "is positive : %d\n");
	}
	else if (n == 0)
	{
		printf(n, "is zero : %d\n");
	}
	else
	{
		printf(n, "is negative : %d\n");
	}
	printf("value of a is : %d\n", n);

	return (0);
}

