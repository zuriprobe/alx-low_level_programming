#include "main.h"

int exact_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Entry point
 * @n: int input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (exact_sqrt_recursion(n, 0));
}
/**
 * _sqrt_recursion - Entry point
 * @n: int input
 * Return: int
 */

int exact_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (exact_sqrt_recursion(n, i + 1));
}
