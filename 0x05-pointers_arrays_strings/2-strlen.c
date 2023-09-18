#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Get the length of a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (*s++)
	{
		str_len++;
	}
	return (str_len);
}
