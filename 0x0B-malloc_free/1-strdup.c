#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or if memory allocation fails, return NULL.
 * Otherwise, return a pointer to the newly duplicated string.
 */
char *_strdup(char *str)
{
	char *dupli_cate;
	unsigned int len, count;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);

	dupli_cate = malloc((sizeof(char) * len) + 1);

	if (dupli_cate == NULL)
	{
		return (NULL);
	}
	for (count = 0; count <= len; count++)
	{
		dupli_cate[count] = str[count];
	}
	return (dupli_cate);
}
