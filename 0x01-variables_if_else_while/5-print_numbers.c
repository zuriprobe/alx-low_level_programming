#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates numbers from 0 to 10'
 * Return: Always 0 (Success)
 */

int main(void)
{	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}	
