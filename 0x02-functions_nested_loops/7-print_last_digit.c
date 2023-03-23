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
	if ((n > 0) || (n < 0)) 
	{
		n = n / 10;
		return (n);
	}
	else
	{
		return (0);
	}
}
