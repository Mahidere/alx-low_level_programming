#include "main.h"
/**
 * puts2 - every other character
 *
 * @str: variable
 */
void puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
