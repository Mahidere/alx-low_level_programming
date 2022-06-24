#include <stdio.h>
/**
 * main - print all arguments
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
