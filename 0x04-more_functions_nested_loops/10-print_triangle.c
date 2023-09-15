#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{

	int width, height;

	if (size > 0)
{
		for (width = 1; width <= size; width++)
{
		for (height = size - width; height > 0; height--)
			_putchar(' ');

		for (height = 0; height < width; height++)
			_putchar('#');

			if (width == size)
				continue;

			_putchar('\n');
}
}

	_putchar('\n');
}
