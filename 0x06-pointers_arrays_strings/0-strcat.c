#include "main.h"
/**
 * _strcat - Concatenates two strings. appends the src string
 * to the dest string, overwriting the terminating null
 * byte (\0) at the end of dest, and then adds a terminating null byte
 *
 * @dest: The target string to which src will be added.
 * @src: The source string to append to dest.
 *
 * Return: A pointer pointing to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *join = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = 0;

	return (join);
}
