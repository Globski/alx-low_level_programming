#include "main.h"
/**
 * string_toupper - A function that changes
 * all lowercase letters of a string to uppercase.
 *
 * @str: The string to convert.
 *
 * Return: A pointer pointing to the resulting string.
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = (*str - 'a') + 'A';
		}
		str++;
	}

	return (p);
}

