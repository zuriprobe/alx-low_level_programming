#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: is the size of the array to store chars
 * @c: characters
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *)malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
