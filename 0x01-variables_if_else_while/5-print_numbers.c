#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int single_d;

	for (single_d = 0; single_d <= 10; single_d++)
{
		printf("%d", single_d);
}
	return (0);
}
