#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Entry point
 *
 * Description: 'Printing a diagonal of slashes'
 * @n: Integer variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int c;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
