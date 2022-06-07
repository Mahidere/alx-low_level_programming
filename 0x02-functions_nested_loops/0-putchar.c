#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * for loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char ch[] = "_putchar";

	for (x = 0 ; x <= 7 ; x++)
	{
		_putchar(ch[x]);
	}
	_putchar('\n');
	return (0);
}
