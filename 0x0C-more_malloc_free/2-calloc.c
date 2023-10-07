#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and using malloc
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int total, c1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	memory = malloc(total);

	if (memory == NULL)
		return (NULL);

	for (c1 = 0; c1 < total; c1++)
	{
		memory[c1] = 0;
	}

	return (memory);
}
