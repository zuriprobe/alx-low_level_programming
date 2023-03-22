#include "main.h"
#include <ctype.h>

/**
 * _islower: 'this is a prototype function that checks if value in c is lowercase'
 * Description: 'It checks if c is lower case or not'
 * @c: is a variable that gets checked
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
