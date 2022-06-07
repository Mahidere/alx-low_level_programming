#include "main.h"
/**
 * times_table - print periodic table
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
