#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 *
 * @c: The character checked
 *
 * Return: 1 for lowercase character, 0 otherwise.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
