#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Description: This program prints the number of arguments passed into it,
 * followed by a new line. The value of 'argc'
 * represents the count of arguments,
 * and it includes the program name as the first argument.
 *
 * Return: Always 0 (indicating success).
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc-1);

	return (0);
}
