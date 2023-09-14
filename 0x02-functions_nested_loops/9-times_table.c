#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int pr, nin, tab;

	for (pr = 0; pr <= 9; pr++)
{
			_putchar('0');
	for (nin = 1; nin <= 9; nin++)
{
			_putchar(',');
			_putchar(' ');
		tab = pr * nin;

	if (tab <= 9)
			_putchar(' ');
	else
{
			_putchar((tab / 10) + '0');
}
			_putchar((tab % 10) + '0');
}
			_putchar('\n');
}
}
