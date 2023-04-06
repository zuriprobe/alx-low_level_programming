#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Entry point
 * @s: Input of a string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	for (; *s != '\n'; s--)
	{
		putchar(*s);
	}
}
