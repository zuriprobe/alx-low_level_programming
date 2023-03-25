#include "main.h"

/**
 * print_number - Entry point
 * Description: 'Prints an integer'
 * @n: Integer variable
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 100)
	{
		print_number(i / 100);
	}
	_putchar(i % 10 + '0');
}
