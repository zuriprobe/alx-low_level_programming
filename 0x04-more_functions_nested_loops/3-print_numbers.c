#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: 'Print numbers from 0 to 9'
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
