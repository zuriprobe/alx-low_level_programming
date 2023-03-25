#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Entry point
 *
 * Description: 'Printing a triangle'
 * @size: Integer variable
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (n = 1; n <= i; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
