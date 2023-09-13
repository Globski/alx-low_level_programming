#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 <= 98; digit_1++)
{
		for (digit_2 = digit_1 + 1; digit_2 <= 99; digit_2++)
{
			putchar((digit_1 / 10) + '0');
			putchar((digit_1 % 10) + '0');
			putchar(' ');
			putchar((digit_2 / 10) + '0');
			putchar((digit_2 % 10) + '0');

	if (digit_1 == 98 && digit_2 == 99)
{
		continue;
}
			putchar(',');
			putchar(' ');
}
}

			putchar('\n');

		return (0);
}
