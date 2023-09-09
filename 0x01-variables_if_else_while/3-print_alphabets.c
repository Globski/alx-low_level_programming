#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int alphabet_l = 97;
	int alphabet_u = 65;

	while (alphabet_l <= 122)
{
		putchar(alphabet_l);
		alphabet_l++;
}

	while (alphabet_u <= 90)
{
		putchar(alphabet_u);
		alphabet_u++;
}

		putchar('\n');
	return (0);
}
