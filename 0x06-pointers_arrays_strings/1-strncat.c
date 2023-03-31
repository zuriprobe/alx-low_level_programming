#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Entry point
 *
 * Description: 'Merging two strings'
 * @dest: Char variable
 * @src: Char variable
 * @n: integer variable
 * Return: characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
