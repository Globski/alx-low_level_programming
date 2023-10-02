#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	coins += cents;

	printf("%d\n", coins);
	return (0);
}
