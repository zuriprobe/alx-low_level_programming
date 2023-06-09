#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point
 * @s: Input
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
