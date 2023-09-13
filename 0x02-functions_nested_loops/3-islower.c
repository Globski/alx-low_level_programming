#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 *
 * @c: The character in ASCII
 *
 * Return: 1 for lowercase character, 0 otherwise.
*/

int _islower(int c)
{

	if (c >= 97 && c <= 99)
{
	return (1);
}
	else
{
	return (0);
}
		_putchar('\n');
}
