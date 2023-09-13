#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long fib_nacc = 0;
	unsigned long fib_nacci = 1;
	unsigned long result;

	for (i = 0; i < 50; i++)
{
		result = fib_nacc + fib_nacci;
		printf("%lu", result);

		fib_nacc = fib_nacci;
		fib_nacci = result;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
}

	return (0);
}
