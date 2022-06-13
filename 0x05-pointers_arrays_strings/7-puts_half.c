#include "main.h"
/**
 * puts_half - print half a string
 *
 * @str: variable
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	if (i % 2 != 0)
		n = (i + 1) / 2;
	else
		n = i / 2;

	for (; str[n] != '\0'; n++)
		_putchar(str[n]);

	_putchar('\n');
}
