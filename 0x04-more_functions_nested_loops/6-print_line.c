#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 *
 * Description: 'Printing a line using putchar'
 * @n: Integer variable
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
