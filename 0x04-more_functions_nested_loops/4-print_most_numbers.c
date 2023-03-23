#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Entry point
 *
 * Description: 'Print numbers from 0 to 9 except 2 and 4'
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i + 48);
			i++;
		}
	}
	_putchar('\n');
}
