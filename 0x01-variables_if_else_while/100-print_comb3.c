#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates two digit numbers using putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;
	int n  = ',';
	int m = 10;
	int counter = 2;

	while (i <= 90)
	{
		if (i == m)
		{	i += counter;
			counter++;
			m += 10;
		}
		else if (i <= 90)
		{	putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (i < 89)
			{	putchar(n);
				putchar(' ');
			}
			i++;
		}
	}
	putchar('\n');
	return (0);
}
