#include "holberton.h"
/**
 * sqrt_check - Checks for the square root of c
 *
 * @x: variable one
 * @y: variable two
 *
 * Return: sqrt of y
 */

int sqrt_check(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	else
	{
	return (sqrt_check(x + 1, y));
	}
}

/**
 * _sqrt_recursion - square root
 *
 * @n: integer variable
 *
 * Return: return sequare root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
