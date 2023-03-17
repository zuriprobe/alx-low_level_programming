#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'The program generates random numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check whether n is positive/negative/zero */
	if (n > 0)
	{	printf("%i is positive\n", n);
	}
	else if (n < 0)
	{	printf("%i is negative\n", n);
	}
	else if (n == 0)
	{	printf("%i is zero", n);
	}
	return (0);
}
