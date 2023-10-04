#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If memory allocation fails or
 * if width or height is 0 or negative, return NULL.
 * Otherwise, return a pointer to the 2-dimensional grid.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int count, count_2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < height; count++)
	{
		array[count] = malloc(sizeof(int) * width);

		if (array[count] == NULL)
		{
			for (count_2 = 0; count_2 < count; count_2++)
			{
				free(array[count_2]);
			}
			free(array);
			return (NULL);
		}

		for (count_2 = 0; count_2 < width; count_2++)
			array[count][count_2] = 0;
	}

	return (array);
}
