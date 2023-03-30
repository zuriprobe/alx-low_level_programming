#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Entry point
 *
 * Description: 'Copying a string'
 * @dest: variable
 * @src: variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int x;
	int length;

	length = strlen(src);

	if (length < 98)
	{
		while (n <= length)
		{
			dest[n] = src[n];
			n++;
		}
	}
	else if (length > 98)
	{
		for (x = 0; x < length; x++)
		{
			dest[x] = src[x];
		}
	}
	return (dest);
}
