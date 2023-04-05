#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * @s: pointer
 * @b: constant
 * @n: integer variable
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
