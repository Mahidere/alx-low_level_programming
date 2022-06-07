#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: variable
 * Return: variable
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = x % 10 * -1;
	}
	else
	{
		x = x % 10;
	}
	_putchar(x + '0');
	return (x);
}
