#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Entry point
 *
 * Description: 'Merging two strings'
 * @dest: variable
 * @src: variable
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int length;

	length = strlen(dest);

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[length] = src[i];
			i++;
		}
	}
	dest[length] = '\0';
	return (dest);
}
