#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: 'It checks if c is lower case or not'
 * @c: is an integer variable.
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
