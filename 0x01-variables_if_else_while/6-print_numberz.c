#include <stdio.h>
/**
 *  main - Main entry point
 *
 *  Description: Print all single digit numbers of base 10 starting from 0
 *
 *  Return: Always 0
 */
int main(void)
{
	int single_d = 48;

	while (single_d <= 57)
{
		putchar(single_d);
		single_d++;
}

		putchar('\n');
	return (0);
}
