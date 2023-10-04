#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid function.
 * @grid: The 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Description: This function frees the memory allocated for each row
 * of the grid and then frees the memory allocated for the grid itself.
 */
void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (count = 0; count < height; count++)
	{
		if (grid[count] != NULL)
		{
			free(grid[count]);
			grid[count] = NULL;
		}
	}

	free(grid);
}
