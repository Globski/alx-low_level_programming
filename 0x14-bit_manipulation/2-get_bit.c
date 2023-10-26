#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to get the bit from
 * @index: The index of the bit (starting from 0)
 *
 * Return: Value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
