#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int count, fiba = 1, fibb = 2, a_half1, a_half2, b_half1, b_half2;
	unsigned long int half1, half2;

	printf("%lu, %lu", fiba, fibb);

	for (count = 3; count <= 92; count++)
	{
		fibb = fibb + fiba;
		fiba = fibb - fiba;
		printf(", %lu", fibb);
	}

	a_half1 = fiba / 1000000000;
	a_half2 = fiba % 1000000000;
	b_half1 = fibb / 1000000000;
	b_half2 = fibb % 1000000000;

	for (count = 93; count <= 98; count++)
	{
		half1 = b_half1 + a_half1;
		half2 = b_half2 + a_half2;
		if (half2 >= 1000000000)
		{
			half1 += 1;
			half2 %= 1000000000;
		}

		printf(", %lu%09lu", half1, half2);

		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = half1;
		b_half2 = half2;
	}

	printf("\n");
	return (0);
}
