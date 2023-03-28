#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * Description: 'Prints the string in reverse'
 * @s: Char variable
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int count;
	int i;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;

	for (i = count; i > 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
