#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'The function checks if n is greater or less or equal to 0'
 * @n: is an integer variable
 *
 * Return 1 or 0 or -1
 */

int print_sign(int n)
{	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
