#include "main.h"

/**
 * _strspn - Entry point
 * @s: pointer
 * @accept: pointer
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
