#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, countBits = 0;

	while (xor > 0)
	{
		countBits += xor & 1;
		xor >>= 1;
	}

	return (countBits);
}

