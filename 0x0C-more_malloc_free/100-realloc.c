#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size (in bytes) of the old allocated space.
 * @new_size: New size (in bytes) for the reallocated memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;
	unsigned int cont;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_memory = malloc(new_size);
		if (new_memory == NULL)
			return (NULL);
		return (new_memory);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_memory = malloc(new_size);
	if (new_memory == NULL)
		return (NULL);

	if (old_size < new_size)
		new_size = old_size;

	for (cont = 0; cont < new_size; cont++)
	{
		((char *)new_memory)[cont] = ((char *)ptr)[cont];
	}

	free(ptr);

	return (new_memory);
}
