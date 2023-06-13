#include <main.h>
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
	if (size == 0)
	{
		return (NULL);
	}

	char *buffer = (char *)malloc(size * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	i = 0;
	for (; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
