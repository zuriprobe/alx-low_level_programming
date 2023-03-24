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
		while (n > 0)
		{
			_putchar('-');
			n--;
		}
		i++;
	}
	_putchar('\n');
}
