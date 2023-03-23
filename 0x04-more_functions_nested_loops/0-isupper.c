#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point
 *
 * Description: 'Checks if the input is upper case'
 * @c: Integer variable
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
