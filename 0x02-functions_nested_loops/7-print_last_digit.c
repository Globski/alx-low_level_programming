#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @t: number as an integer
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int t)
{
	int last_d;

	last_d = t % 10;

	if (last_d < 0)
{
		_putchar(-last_d + 48);
		return (-last_d);
}
	else

	_putchar(last_d + 48);
	return (last_d);
}
