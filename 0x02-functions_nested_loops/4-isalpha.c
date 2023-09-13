#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: The character in ASCII
 *
 * Return: 1 for lowercase or uppercase character, 0 otherwise.
*/

	int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
	else
{
	return (0);
}
		_putchar('\n');
}
