#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Generate a random number, check
 * if it's positive, negative, or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf("The number %d: is positive\n", n);
}

	else if (n == 0)
{
		printf("The number %d: is 0\n", n);
}

	else
{
		printf("The number %d: is negative\n", n);
}
	return (0);
}
