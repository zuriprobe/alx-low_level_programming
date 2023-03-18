#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'The program generates numbers from 0 to 10'
 * Return: Always 0 (Success)
 */

int main(void)
{	int i = 0;
	while (i < 10)
	{	putchar(i + '0');
		if (i < 9)
		{	putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
