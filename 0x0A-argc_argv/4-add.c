#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count, count_2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		for (count_2 = 0; argv[count][count_2]; count_2++)
		{
			if (!isdigit(argv[count][count_2]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
