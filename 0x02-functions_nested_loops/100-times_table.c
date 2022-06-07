#include "main.h"
/**
 * print_times_table - function entry
 * @n: variable
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int x, y, z;

		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y <= n ; y++)
			{
				z = x * y;
				if (z < 10)
				{
					if (y > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(z + '0');
					if (y != n)
						comma(void);
				}
				else if (z > 9 && z < 100)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
					if (y != n)
						comma(void);
				}
				else
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
					if (y != n)
						comma(void);
				}
			}
			_putchar('\n');
		}
	}
}

void comma(void)
{
	_putchar(',');
	_putchar(' ');
}
