#include <stdlib.h>
/**
 * free_grid - Free up a 2d array
 *
 * @grid: the array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
