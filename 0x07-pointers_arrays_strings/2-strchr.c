#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: pointer
 * @c: character variable
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
