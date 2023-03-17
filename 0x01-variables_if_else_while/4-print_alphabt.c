#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'The program generates letters from A to Z'
 * Return: Always 0 (Success)
 */

int main(void)
{	char ch;
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		if (tolower(ch) == 'e' || tolower(ch) == 'q')
		{
			continue;
		}
		putchar(tolower(ch));
	}
	putchar('\n');
	return (0);
}
