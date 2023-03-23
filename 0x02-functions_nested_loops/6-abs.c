#include "main.h"
#include <stdlib.h>

/**
 * _abs - Entry point
 *
 * Description: 'The function calculates the absolute value of integer'
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else 
	{
		return(-1 * n);
	}
}
