#include "main.h"
/**
 *print_rev - function that prints a string, in reverse
 * @s: The string to print
 */
void print_rev(char *s)
{
	int str_len = 0, arr_loc;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (arr_loc = str_len - 1; arr_loc >= 0; arr_loc--)
	{
		_putchar(s[arr_loc]);
	}

	_putchar('\n');
}
