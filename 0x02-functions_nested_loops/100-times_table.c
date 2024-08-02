#include "main.h"

/**
 * print_product - Prints a product with appropriate formatting.
 *
 * @product: The product to print.
 * @is_first: Boolean to indicate if it is the first number in the row.
 */
void print_product(int product, int is_first)
{
	if (!is_first)
	{
		_putchar(',');
		_putchar(' ');

		if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (product < 100)
		{
			_putchar(' ');
		}
	}

	if (product < 10)
	{
		_putchar(product + '0');
	}
	else if (product < 100)
	{
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	}
	else
	{
		_putchar((product / 100) + '0');
		_putchar(((product / 10) % 10) + '0');
		_putchar((product % 10) + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: The value of the times table to print.
 */
void print_times_table(int n)
{
	int value, sig, product;

	if (n >= 0 && n <= 15)
	{
		for (value = 0; value <= n; value++)
		{
			for (sig = 0; sig <= n; sig++)
			{
				product = value * sig;
				print_product(product, sig == 0);
			}
			_putchar('\n');
		}
	}
}

