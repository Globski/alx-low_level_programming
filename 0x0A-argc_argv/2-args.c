#include <stdio.h>
/**
 * main - Prints all arguments received, one per line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);

	}
	return (0);
}
