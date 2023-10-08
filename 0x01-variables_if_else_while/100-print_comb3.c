#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Print all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int digit_3 = 48;
	int digit_2;

	while (digit_3 <= 56)
{
		digit_2 = digit_3 + 1;

	while (digit_2 <= 57)
{
		putchar(digit_3);
		putchar(digit_2);

	if (digit_3 < 56)
{
		putchar(',');
		putchar(' ');
}
		digit_2++;
}
		digit_3++;
}
		putchar('\n');
	return (0);
}
