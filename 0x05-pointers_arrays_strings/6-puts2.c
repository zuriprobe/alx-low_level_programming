#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 *
 * Description: 'Counting in twos'
 * @str: Character variable
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
		str++;
	}
	_putchar('\n');
}
