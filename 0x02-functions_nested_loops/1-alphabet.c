#include "main.h"
/**
 * main - Main entry point
 *
 * Description: A function that prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	char alphabet_l = 'a';

	while (alphabet_l <= 'z')
{
		_putchar(alphabet_l);
		alphabet_l++;
}
		_putchar('\n');

	return (0);
}
