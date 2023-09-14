
#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 *
 * @n: The number of times the character _ should be printed.
 */

void print_line(int n)
{

	int num_time;

	if (n > 0 || n <= 0)
	{
		for (num_time = 0; num_time < n; num_time++)

		{

			_putchar('_');

		}
		_putchar('\n');
	}
}
