#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int ptr = n;

	if (n < 0)
	{
		_putchar('-');
		ptr = -ptr;
	}

	if (ptr / 10 != 0)
	{
		print_number(ptr / 10);
	}

	_putchar((ptr % 10) + '0');
}
