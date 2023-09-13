#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int pr, nin, tab;

	for (pr = 0; pr <= 9; pr++)
{
	for (nin = 0; nin <= 9; nin++)
{
		tab = pr * nin;

		if (tab == 0)

{
			_putchar('0');
}
		else
{
			_putchar(',');
			_putchar(' ');
}
			_putchar(tab + '0');

		if (tab < 10)
{
			_putchar(' ');
}
			_putchar((tab / 10) + '0');
			_putchar((tab % 10) + '0');
}
			_putchar('\n');
}
}
