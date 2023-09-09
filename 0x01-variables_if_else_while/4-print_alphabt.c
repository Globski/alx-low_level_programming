#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Print the alphabet in lowercase except letter q and e
 *
 * Return: Always 0
 */
int main(void)
{
	int alphabet_l = 97;

	while (alphabet_l <= 122)
{

	if (alphabet_l == 113 || alphabet_l == 101)
{
		alphabet_l++;
	continue;
}

		putchar(alphabet_l);
		alphabet_l++;
}

		putchar('\n');
	return (0);
}

