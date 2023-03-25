#include "main.h"
#include <stdio.h>

/**
 * print_square - Entry point
 *
 * Description:'Printing a square using # character'
 * @size: Integer variable
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}