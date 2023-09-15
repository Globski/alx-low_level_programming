#include "main.h"

/**
 * print_diagonal - A function that that draws a diagonal line on the terminal.
 * @n: The  number of times the character \ should be printed.
 */

void print_diagonal(int n)
{

	int width, height;

	if (n <= 0)
	{
		_putchar('\n');

	}

	for (width = 0; width < n; width++)
	{
		for (height = 0; height < width; height++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
}
