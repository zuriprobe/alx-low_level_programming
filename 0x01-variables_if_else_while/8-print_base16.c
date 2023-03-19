#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates letters from A to Z'
 * Return: Always 0 (Success)
 */

int main(void)
{	int i;
	int n  = 1;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else if (i >= 10 && i <= 16)
		{
			putchar(tolower(64 + n));
			n++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
