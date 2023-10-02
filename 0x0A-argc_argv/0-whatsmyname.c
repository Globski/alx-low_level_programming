#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Description: This program prints its name, followed by a new line.
 * If the program is renamed, it will print the new name without needing
 * to recompile. It checks if any arguments were passed and prints the
 * program name or a message if no arguments were provided.
 *
 * Return: Always 0 (indicating success).
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("not availabe\n");
	}

	return (0);
}
