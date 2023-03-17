#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates letters from A to Z'
 * Return: Always 0 (Success)
 */

int main(void)
{	int i = 0;
	for (i = 0; i < 10; i++)
	{
		putchar( '0' + i);
	}
	putchar('\n');
	return (0);
}
