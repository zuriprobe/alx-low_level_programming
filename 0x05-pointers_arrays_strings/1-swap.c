#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * Description: 'Swapping variables'
 * @a: Integer variable
 * @b: Integer variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
