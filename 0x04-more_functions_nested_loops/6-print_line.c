#include "main.h"

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

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
