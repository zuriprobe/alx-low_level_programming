#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * Description 'reversing a string'
 * @s: Char variable
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	char temp;
	int length;
	int middle;

	length = strlen(s);
	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
