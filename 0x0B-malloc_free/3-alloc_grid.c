#include <stdlib.h>

/**
 * alloc_grid - function to create 2 dimentional array
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: 2 dimentional array or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **mem;

	if (width <= 0 || height <= 0)
		return ('\0');
	mem = malloc(sizeof(int *) * height);
	if (mem == NULL)
	{
		free(mem);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);
		if (mem[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(mem[k]);
			free(mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	}

	return (mem);
}
