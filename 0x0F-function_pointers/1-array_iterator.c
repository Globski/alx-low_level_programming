#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 *
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be executed.
 *
 * Description: This function applies the provided function to each
 * element of the given array. If either `array` or `action`
 * is NULL, it returns without performing any action.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
