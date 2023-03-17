#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates letters from Z to A'
 * Return: Always 0 (Success)
 */

int main(void)
{	char ch;
	for (ch = 'Z' ; ch >= 'A' ; ch--)
	{	putchar(tolower(ch));
	}
	putchar('\n');
	return (0);
}
