#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - Entry point
 *
 * Description: 'Print half of the string'
 * @str: Char variable
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int length;

	length = strlen(str);

	if (length < 15)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
