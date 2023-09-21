#include "main.h"
/**
 * _strncpy - A function that copies a string.
 *
 * @dest: The destination string where src will be copied.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;


	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}


	while (n > 0)
	{
		*dest = 0;
		dest++;
		n--;
	}

	return (result);
}
