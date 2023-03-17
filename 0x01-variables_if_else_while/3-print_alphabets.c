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
	{	putchar(tolower(ch));
		if (ch == 'Z')
		{	for (ch = 'A' ; ch <= 'Z' ; ch++)
			{	putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}
