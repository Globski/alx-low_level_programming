#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: If size is 0 or if memory allocation fails, return NULL.
 * Otherwise, return a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int count;

	if (size == 0)
		return (NULL);

	char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		char_array[count] = c;

	return (char_array);
}
