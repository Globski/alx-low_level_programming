#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: The array to search within.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Description: This function searches for an integer in the given array
 * by applying the provided comparison function to each element
 * of the array. It returns the index of the first element for
 * which the comparison function does not return 0. If no
 * element matches, or if size is less than or equal to 0, it returns -1.
 *
 * Return: Index of the first matching element
 * or -1 if no match or invalid size.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (cont = 0; cont < size; cont++)
	{
		if (cmp(array[cont]) != 0)
			return (cont);
	}

	return (-1);
}
