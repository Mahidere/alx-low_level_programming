#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: first variable
 * @max: second variable
 *
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return ('\0');

	j = (max - min) + 1;
	ptr = malloc(sizeof(int) * j);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < j; i++)
		ptr[i] = min + i;

	return (ptr);
}
