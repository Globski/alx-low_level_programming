#include "main.h"

/**
  * print_alphabet - Print alphabets in lowercase.
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
}
