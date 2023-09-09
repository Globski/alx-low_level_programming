#include <stdio.h>
/**
 *  main - Main entry point
 *
 *  Description: Print the lowercase alphabet in reverse order
 *
 *  Return: Always 0
 */
int main(void)
{
	int alphabet_lr = 122;

	while (alphabet_lr >= 97)
{
		putchar(alphabet_lr);
		alphabet_lr--;
}

		putchar('\n');
	return (0);
}

