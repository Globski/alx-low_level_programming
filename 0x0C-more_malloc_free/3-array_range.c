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
	int total;

	if (min > max)
		return (NULL);

	total = max - min + 1;
	memory = malloc(sizeof(int) * (total));

	if (memory == NULL)
		return (NULL);

	for (cont = 0; cont < total; cont++)
	{
		memory[cont] = min++;
	}

	return (memory);
}
