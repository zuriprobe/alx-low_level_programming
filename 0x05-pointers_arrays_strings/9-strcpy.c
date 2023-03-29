#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Entry point
 *
 * Description: 'Copying a string'
 * @dest: Destination variable
 * @src: String variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	length = strlen(src);

	if (length <= 98)
	{
		strcpy(dest, src);
		return (dest);
	}
	else
	{
		return (0);
	}
}
