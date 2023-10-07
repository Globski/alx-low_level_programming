#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array,
 * or NULL on failure or invalid input.
 */
int *array_range(int min, int max)
{
	int *memory;
	int cont;

	if (min > max)
		return (NULL);

	memory = malloc(sizeof(int) * (max - min + 1));

	if (memory == NULL)
		return (NULL);

	for (cont = min; cont <= max; cont++)
	{
		memory[cont - min] = cont;
	}

	return (memory);
}
