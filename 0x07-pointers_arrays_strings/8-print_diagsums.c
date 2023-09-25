#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix.
 *
 * @a: The square matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int count;
	int add = 0, add_1 = 0;

	for (count = 0; count < size; count++)
	{
		add += *(a + count * size + count);
		add_1 += *(a + count * size + (size - 1 - count));
	}

	printf("%d, %d\n", add, add_1);
}
