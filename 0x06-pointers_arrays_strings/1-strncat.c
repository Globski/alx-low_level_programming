#include "main.h"
/**
 * _strncat - Concatenates two strings.
 *
 * @dest: The destination string where src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result;

	for (result = dest; *dest != 0; dest++)
	{

	}

	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = 0;

	return (result);
}

