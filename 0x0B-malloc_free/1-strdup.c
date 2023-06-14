#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string literal
 * Return: char
 */

char *_strdup(char *str)
{
	char *s;
	int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	s = (char *)malloc((length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < length)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
