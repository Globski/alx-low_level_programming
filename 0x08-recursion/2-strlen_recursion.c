#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string recursively.
 *
 * @s: Pointer to the string for which length is to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
