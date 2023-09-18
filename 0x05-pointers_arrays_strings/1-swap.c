#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers.
 * @a: The first value to be swapped.
 * @b: The second value to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int hold_val_a = *a;
	*a = *b;
	*b = hold_val_a;
}
