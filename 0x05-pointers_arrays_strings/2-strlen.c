#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Entry point
 *
 * Description: 'Taking the length of the string'
 * @s: String variable
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
