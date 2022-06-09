#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	long x, y;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square ; x++)
	{
		if (num % x == 0)
		{
			y = num / x;
		}
	}
	printf("%ld\n", y);
	return (0);
}
