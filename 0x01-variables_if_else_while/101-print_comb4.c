#include <stdio.h>
/**
 * main - Mai entry point
 *
 * Description: Print all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int digit_f = 0;
	int digit_s, digit_3;

	while (digit_f <= 7)
{
		digit_s = digit_f + 1;

	while (digit_s <= 8)
{
		digit_3 = digit_s + 1;

	while (digit_3 <= 9)
{
		putchar(digit_f + '0');
		putchar(digit_s + '0');
		putchar(digit_3 + '0');

	if (digit_f < 7)
{
		putchar(',');
		putchar(' ');
}
		digit_3++;
}
		digit_s++;
}
		digit_f++;
}
		putchar('\n');
	return (0);
}
