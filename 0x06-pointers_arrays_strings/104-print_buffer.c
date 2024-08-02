#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer.
 *
 * @buffer: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *buffer, int size)
{
	int offset, byte_index;
	char current_char;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);

		for (byte_index = 0; byte_index < 10; byte_index++)
		{
			if (offset + byte_index < size)
				printf("%02x", (unsigned char)buffer[offset + byte_index]);
			else
				printf("  ");

			if (byte_index % 2 == 1)
				printf(" ");
		}

		for (byte_index = 0; byte_index < 10; byte_index++)
		{
			if (offset + byte_index < size)
			{
				current_char = buffer[offset + byte_index];
				if (current_char >= 32 && current_char <= 126)
					putchar(current_char);
				else
					putchar('.');
			}
		}

		printf("\n");
	}
}

