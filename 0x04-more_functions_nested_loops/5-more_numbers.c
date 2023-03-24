#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Entry point
 *
 * Description: 'Print numbers from 0 to 14'
 *
 * Return void
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
