#include "main.h"
/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{

	int numb, numb2;

	for (numb = 48; numb < 57; numb++)
	{
		for (numb2 = 0; numb2 <= 14; numb2++)
		{
			if (numb2 > 9)
			{
				_putchar('0' + (numb2 / 10));
			}
			_putchar('0' + (numb2 % 10));
		}
		_putchar('\n');
	}
}
