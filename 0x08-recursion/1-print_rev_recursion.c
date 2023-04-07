#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Entry point
 * @s: Input of a string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
