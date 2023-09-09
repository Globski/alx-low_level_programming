#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
int digit = 48;
	int alphabet_l = 97;

	while (digit <= 57)
{
		putchar(digit);
		digit++;
}

	while (alphabet_l <= 102)
{
		putchar(alphabet_l);
		alphabet_l++;
}
		putchar('\n');

	return (0);
}
