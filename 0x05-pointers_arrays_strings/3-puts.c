#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * Description: 'Prints a strintg to the stdout'
 * @str: Char variable
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
