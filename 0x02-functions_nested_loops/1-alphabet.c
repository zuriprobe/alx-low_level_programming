#include "main.h"

/**
 * print_alphabet - is a prototype function that prints letters from a to z
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
