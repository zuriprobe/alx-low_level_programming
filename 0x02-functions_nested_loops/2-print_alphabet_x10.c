#include "main.h"

/**
 * print_alphabet_x10 - print alphabets from a to z 10 times on a new line
 * Description: 'Print s letters a - z 10 times on a new line'
 * Return: void
 */

void print_alphabet_x10(void)
{	char i = 'a';
	int n = 0;

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
