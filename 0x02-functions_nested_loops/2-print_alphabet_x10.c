#include "main.h"
/**
 * main - Main entry point
 *
 * print_alphabet_x10 - prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
*/

void print_alphabet_x10(void);
{
	for (int alphabet_10x = 1; alphabet_10x <= 10; alphabet_10x++)
{
	char alphabet_l = 'a';

	while (alphabet_l <= 'z')

{
		print_alphabet_x10(alphabet_l);
		alphabet_l++;
}
		 _putchar('\n');
}

}
