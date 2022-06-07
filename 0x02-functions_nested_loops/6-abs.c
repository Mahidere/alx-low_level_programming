#include "main.h"
/**
 * _abs - absolute value
 * @x: variable
 * Return: value
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = -1 * x;
	}
	else if (x > 0)
	{
		x = x;
	}
	else
	{
		x = 0;
	}
	return (x);
}
