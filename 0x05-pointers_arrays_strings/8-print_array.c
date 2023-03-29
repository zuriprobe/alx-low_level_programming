#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Entry point
 *
 * Description: 'Printing elements of an array'
 * @n: Integer variable
 * @a: Pointer variable
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *a);
		if (i < n - 1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
}
