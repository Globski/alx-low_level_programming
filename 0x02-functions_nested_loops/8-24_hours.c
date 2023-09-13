#include "main.h"

/**
 * jack_bauer -  A function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int min_t, of_day, sta_of, of_min;

	for (min_t = 0; min_t <= 2; min_t++)
{
	for (of_day = 0; of_day <= 9; of_day++)
{
	for (sta_of = 0; sta_of <= 5; sta_of++)
{
	for (of_min = 0; of_min <= 9; of_min++)
{
	if (min_t >= 2 && of_day >= 4)
{
		break;
}
		_putchar(min_t + '0');
		_putchar(of_day + '0');
		_putchar(':');
		_putchar(sta_of + '0');
		_putchar(of_min + '0');
		_putchar('\n');

}
}
}
}
}
