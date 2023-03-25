#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing multiplies of 3 and 5'
 *
 * Return: void
 */

int main()
{
	int i;

	char multiple_of_3[] = "Fizz";
	char multiple_of_5[] = "Buzz";
	char multiple_of_both[] = "FizzBuzz";

	i = 1;

	while (i < 100)
	{
		if ((i % 3) != 0)
		{
			printf("%i", i);
			putchar(' ');
			i++;
		}
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("%s", multiple_of_both);
			putchar(' ');
			i++;
		}
		if ((i % 3) == 0)
		{
			printf("%s", multiple_of_3);
			putchar(' ');
			i++;
		}
		if ((i % 5) == 0)
		{
			printf("%s", multiple_of_5);
			putchar(' ');
			i++;
		}
	}
	return (0);
}
