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
	
	i = 0;

	while (i < n)
	{
		if (n == 0 && n < 0)
		{
			break;
		}
		_putchar('-');
		i++;
	}
	_putchar('\n');
}
