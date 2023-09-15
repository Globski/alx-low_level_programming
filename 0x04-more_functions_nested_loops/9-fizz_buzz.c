#include <stdio.h>

/**
 * main - Print the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz instead of the number.
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int buzz_test;

	for (buzz_test = 1; buzz_test <= 100; buzz_test++)
	{

		if (buzz_test % 3 == 0 && buzz_test % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (buzz_test % 3 == 0)
		{
			printf("Fizz");

		}
		else if (buzz_test % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", buzz_test);

		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
