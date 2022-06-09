#include "main.h"
/**
 * _isdigit - check for digit
 * @c: variable
 * Return: 1 success or 0 fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
