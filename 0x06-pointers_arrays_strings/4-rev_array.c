#include "main.h"
/**
 * reverse_array -  A function that reverses the
 * content of an array of integers.
 *
 * @a: An array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int dir;
	int hold;

	for (dir = 0; dir < n / 2; dir++)
	{
		hold = a[dir];
		a[dir] = a[n - 1 - dir];
		a[n - 1 - dir] = hold;
	}
}
