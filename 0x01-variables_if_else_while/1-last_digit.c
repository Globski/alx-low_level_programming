#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n > 5)
{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
	else if (n == 0)
{
		printf("Last digit of %d is %d and is 0\n", n, ld);
}
	else
{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
	return (0);
}
