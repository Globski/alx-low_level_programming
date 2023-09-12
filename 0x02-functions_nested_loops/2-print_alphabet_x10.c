#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
	int alphabet_10x;
	char alphabet_l;

	for (alphabet_10x = 1; alphabet_10x <= 10; alphabet_10x++)
{
	for (alphabet_l = 'a'; alphabet_l <= 'z'; alphabet_l++)
{
		_putchar(alphabet_l);
}
		 _putchar('\n');
}

}
