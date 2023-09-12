#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
	int alphabet_10x = 1;
	char alphabet_l = 'a';

	while (alphabet_10x <= 10)
{
		alphabet_10x++;

	while (alphabet_l <= 'z')

{
		_putchar(alphabet_l);
		alphabet_l++;
}
		 _putchar('\n');
}

}
