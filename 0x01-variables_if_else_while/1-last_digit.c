#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * if condition
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l;

	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is", n, " %d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is ", n, "%d and is 0\n", l);
	}
	else
	{
		printf("Last digit of %d id ", n, "%d and is less than 6 and not 0\n", l);
	}
	return (0);
}
