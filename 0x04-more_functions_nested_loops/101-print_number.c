#include "main.h"
/**
 * print_number - A function that prints an integer. without using long
 *
 * @n: Prints the integer.
 */

void print_number(int n)
{
	unsigned int ptr_int = n;
	unsigned int divisor;
	unsigned int hold;

	if (n < 0)
	{
		_putchar('-');
		ptr_int = -ptr_int;
	}

	divisor = 1;
	hold = ptr_int;

	for (; hold >= 10; divisor *= 10)
	{
		hold /= 10;

	}

	while (divisor > 0)
	{
		_putchar((ptr_int / divisor) + '0');
		ptr_int %= divisor;
		divisor /= 10;
	}

}
