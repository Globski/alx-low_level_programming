#include "main.h"

/**
 * print_most_numbers - A function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * excluding print 2 and 4.
 *
 */

void print_most_numbers(void)
{

	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		if (numb == 50 || numb == 52)
		{

			continue;
		}
		else
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}
