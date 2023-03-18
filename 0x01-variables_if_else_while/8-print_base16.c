#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates letters from A to Z'
 * Return: Always 0 (Success)
 */

int main(void)
{	int i;
	while (i < 16)
	{	printf("%x", i);
		i++;
	}
	return (0);
}
