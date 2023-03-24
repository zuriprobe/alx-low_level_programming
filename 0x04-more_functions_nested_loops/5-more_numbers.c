#include "main.h"
#include <stdio.h>

/**
 * print_more_numbers - Entry point
 *
 * Description: 'Print numbers from 0 to 14'
 *
 * Return void
 */

void more_numbers(void)
{	
	int i;
	int r = 0;
	int j = 0;
	
	while (j < 10)
	{
		i = 0;
		r = 0;
		while (i < 15)
		{
			if (i <= 9)
			{
				putchar((i%10) + 48);
				i++;
			}
			else
			{
				putchar((i/10) + 48);
				putchar((r%10) + 48);
				i++;
				r++;
			}
		}
		putchar('\n');
		j++;
	}
}
