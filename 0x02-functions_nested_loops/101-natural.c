#include <stdio.h>

/**
 * main - Lists all the natural numbers below
 * 10 that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int nat_n, bel = 0;

	for (nat_n = 0; nat_n < 1024; nat_n++)
{
	if (nat_n % 3 == 0 || nat_n % 5 == 0)
		bel += nat_n;
}
		printf("%d\n", bel);
	return (0);
}
