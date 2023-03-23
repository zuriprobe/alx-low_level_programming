#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point
 *
 * Description: 'Checks for digit 0 through to 9'
 * @c: Integer variable
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
