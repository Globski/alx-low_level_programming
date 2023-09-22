#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13.
 *
 * @s: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *s)
{
	char *result, root;

	if (s == 0)
		return (s);

	result = s;

	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			root = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';
			*s = (((*s - root + 13) % 26) + root);
		}
		s++;
	}

	return (result);
}

