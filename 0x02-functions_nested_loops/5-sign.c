#include "main.h"
/**
 * print_sign - print sign
 * @n: variable
 * Return: 0 for if it's zero or 1 if greater than 0 or -1 for less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
