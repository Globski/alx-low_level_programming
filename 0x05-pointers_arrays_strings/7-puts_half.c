#include "main.h"
/**
 * puts_half - A function that prints half of a string.
 * @str: The string to be inputed.
 */

void puts_half(char *str)
{

	int ful_str = 0, hal_str;

	while (str[ful_str] != '\0')
		ful_str++;

	hal_str = ful_str / 2;

	if ((ful_str % 2) == 1)
	{
		hal_str++;
	}

	for (; hal_str < ful_str; hal_str++)
		_putchar(str[hal_str]);

	_putchar('\n');
}
