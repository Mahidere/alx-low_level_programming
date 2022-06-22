#include "main.h"
/**
 * factorial - factorial function
 *
 * @n: number variable
 *
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
