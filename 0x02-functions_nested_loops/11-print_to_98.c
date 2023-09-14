#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 * inputed to 98, followed by a new line.
 * separated by a comma, followed by a space.
 * @n: The number to hold the value
 */

void print_to_98(int n)
{
	if (n >= 98)
{
		for (; n > 98;)
{

			printf("%d, ", n--);

			printf("%d\n", n);

}
}

	else
{
			for (; n < 98;)
{
				printf("%d, ", n++);
}
				printf("%d\n", n);

}
}
