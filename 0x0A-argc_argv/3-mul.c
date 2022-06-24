#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple of two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success and 1 for error
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
		return (0);
	}
}
