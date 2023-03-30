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
	int i = 0;
	int x;

	while (*(src + i) != '\n')
	{
		i++;
	}
	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\n';
	return (dest);
}
