#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: 'Print numbers from 0 to 9'
 * 
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
