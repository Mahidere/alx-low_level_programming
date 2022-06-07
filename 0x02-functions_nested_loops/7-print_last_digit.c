#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: variable
 * Return: variable
 */
int print_last_digit(int x)
{
	x = x % 10;
	_putchar(x);
	return (x);
}
