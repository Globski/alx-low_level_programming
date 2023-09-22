#include <stdio.h>
#include "main.h"
/**
 * print_buffer -  A function that prints a buffer.
 *
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int count, count_1;
	char final;

	for (count = 0; count < size; count += 10)
	{
		printf("%08x: ", count);

		for (count_1 = 0; count_1 < 10; count_1++)
		{
			if (count + count_1 < size)
				printf("%02x", b[count + count_1]);
			else
				printf("  ");

			if (count_1 % 2 != 0)
				printf(" ");
		}

		for (count_1 = 0; count_1 < 10; count_1++)
		{
			if (count + count_1 < size)
			{
				final = b[count + count_1];
				if (final >= 32 && final <= 126)
					putchar(final);
				else
					putchar('.');
			}
		}

		printf("\n");
	}
}
