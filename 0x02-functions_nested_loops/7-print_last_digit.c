#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'Printing the last digit''
 * @n: Integer variable
 *
 * Return: Int value
 */

int print_last_digit(int n)
{
	int c;
	if (n >= 0)
	{
		c = n % 10;
	}
	if (n < 0)
	{
		n = -n;
		c = n % 10;
	}
	if (c < 0)
	{
		c = -c;
	}
	_putchar(c + '0');
	return (c);
}
