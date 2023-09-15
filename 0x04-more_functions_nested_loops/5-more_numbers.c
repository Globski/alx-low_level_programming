#include "main.h"
/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{

	int numb, numb2;

	for (numb2 = 0; numb2 < 9; numb2++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
			{
				_putchar('0' + (numb / 10));
			}
			_putchar('0' + (numb % 10));
		}
		_putchar('\n');
	}
}
