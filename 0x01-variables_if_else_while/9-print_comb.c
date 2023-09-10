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
	int digit = 48;

	while (digit <= 57)
{
		putchar(digit);
	if (digit < 57)
{
		putchar(',');
		putchar(' ');
}
		digit++;
}
		putchar('\n');

	return (0);
}
