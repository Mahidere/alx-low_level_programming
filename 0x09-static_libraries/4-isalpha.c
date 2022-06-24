#include "main.h"
/**
 * _isalpha - check if it is a letter
 * @c: variable to be checked
 * Return: 1 for success and 0 failure
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
