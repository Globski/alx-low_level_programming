#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int val1, val2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);
	sum = val1 * val2;

	printf("%d\n", sum);

	return (0);
}
