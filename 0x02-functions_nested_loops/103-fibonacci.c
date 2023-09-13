#include <stdio.h>

/**
 * main - Prints prints the sum of the even-valued terms, followed
 * by a new line. values do not exceed 4,000,000
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main(void)
{
	unsigned long fib_nacc = 1;
	unsigned long fib_nacci = 2;
	unsigned long next_fib_nacc = 0;
	unsigned long sum = 0;

	while (fib_nacci <= 4000000)
{
	if (fib_nacci % 2 == 0)
{
		sum += fib_nacci;
}
		next_fib_nacc = fib_nacc + fib_nacci;

		fib_nacc = fib_nacci;
		fib_nacci = next_fib_nacc;
}

			printf("%ld\n", sum);
	return (0);
}
