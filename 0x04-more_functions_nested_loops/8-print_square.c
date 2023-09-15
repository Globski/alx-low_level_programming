#include "main.h"

/**
 * print_square - A function that  prints a square, followed by a new line.
 * @size: The size of the square.
 */

void print_square(int size)
{

	int width, height;

	if (size <= 0)
	{
		_putchar('\n');

	}

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
