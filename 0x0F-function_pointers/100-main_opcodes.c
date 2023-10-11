#include <stdio.h>
#include <stdlib.h>
/**
 * opcodes - print the opcodes of a function
 * @a: a pointer to a function
 * @size: the number of bytes to print
 */
void opcodes(void (*a)(), int size)
{
	int cont;

	unsigned char *ptr = (unsigned char *)a;

	for (cont = 0; cont < size - 1; cont++)
	{
		printf("%02x ", ptr[cont]);
	}
	printf("%02x\n", ptr[size - 1]);
}

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 1 for incorrect argument count,
 * 2 for negative size
 */
int main(int argc, char *argv[])
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}


	opcodes((void (*)(void))main, size);

	return (0);
}
