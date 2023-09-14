#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The value to be print.
 */

void print_times_table(int n)
{
	int value, sig, sum;

	if (n >= 0 && n <= 15)
{

	value = 0;
		while (value <= n)
{
			value++;
			_putchar('0');
	sig = 1;

		while (sig <= n)

{
			sig++;
			_putchar(',');
			_putchar(' ');

	sum = value * sig;

					if (sum <= 99)
						_putchar(' ');
					if (sum <= 9)
						_putchar(' ');

					if (sum >= 100)
{
						_putchar((sum / 100) + '0');
						_putchar(((sum / 10)) % 10 + '0');
}
				else if (sum <= 99 && sum >= 10)
{
					_putchar((sum / 10) + '0');
}
					_putchar((sum % 10) + '0');
}
					_putchar('\n');
}
}
}
