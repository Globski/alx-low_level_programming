#include <stdio.h>
/**
 * main - Main entry point
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{

	int alphabet_l = 97;

	while (alphabet_l <= 122)
{
		putchar(alphabet_l);
		alphabet_l++;
}
		putchar('\n');

	return (0);
}
