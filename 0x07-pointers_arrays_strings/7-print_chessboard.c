#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard to print.
 */
void print_chessboard(char (*a)[8])
{
	int count, count_1;

	for (count = 0; count < 8; count++)
	{
		for (count_1 = 0; count_1 < 8; count_1++)
		{
			_putchar(a[count][count_1]);
		}
		_putchar('\n');
	}
}
