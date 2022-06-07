#include "main.h"
/**
 * _abs - absolute value
 * @int: variable
 * Return: value
 */
int _abs(int)
{
	int x;

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
