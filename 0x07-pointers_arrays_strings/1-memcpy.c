#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: integer variable
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
