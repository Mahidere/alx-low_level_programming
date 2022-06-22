#include "main.h"
/**
 * _pow_recursion - x the power of y function
 *
 * @x: base variable
 * @y: exponential variable
 *
 * Return: returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
