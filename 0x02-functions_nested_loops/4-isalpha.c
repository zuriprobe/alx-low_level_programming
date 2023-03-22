#include "main.h"
#include <ctype.h>

/**
 * _isalpha: Entry point
 *
 * Description: 'The function checks if input is lowercase or upppercase'
 * @c: Stores the alphabets
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
