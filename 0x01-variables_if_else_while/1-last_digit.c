#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", l);
	}
	else
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", l);
	}
	return (0);
}