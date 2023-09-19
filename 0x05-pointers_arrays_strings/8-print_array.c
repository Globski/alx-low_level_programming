#include <stdio.h>
/**
 * print_array - A function that prints n elements of an array of integers
 *
 * @a: The array of numbers
 * @n: The number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int arr_loc;

	for (arr_loc = 0; arr_loc < n; arr_loc++)
	{
		printf("%d", a[arr_loc]);

		if (arr_loc != (n - 1))
		{
			printf(", ");
		}

	}

	printf("\n");
}
