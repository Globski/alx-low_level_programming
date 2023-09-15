#include "main.h"
/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{

	int numb, numb2;

	for (numb = 0; numb < 10; numb++)
	{
		for (numb2 = 0; numb2 < 15; numb2++)
		{
			if (numb2 >= 10)
			{
				_putchar(numb2 / 10 + '0');
			}
			_putchar(numb2 % 10 + '0');
		}
		_putchar('\n');
	}
}
