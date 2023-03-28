#include "main.h"
#include <string.h>
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
	int length = strlen(str);

	for (i = 0; i < length / 2; i++)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
