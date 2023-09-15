#include <stdio.h>
/**
 * main - Find and print the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long pri_fc = 612852475143;
	long factor = 2;

	while (pri_fc > 1)
	{
		if (pri_fc % factor == 0)
		{
			pri_fc /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", factor);

	return (0);
}


