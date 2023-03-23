#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: 'Print last digit of a number'
 * @n: Integer variable
 *
 * Return: Int value
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		return (_putchar((n % 10) + '0'));
	}
	else if (n < 0)
	{
		return (_putchar((-n % 10) + '0'));
	}
	else
	{
		return (_putchar((n % 10) + '0'));
	}
}
