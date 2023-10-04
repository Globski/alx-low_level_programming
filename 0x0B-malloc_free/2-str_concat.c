#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If memory allocation fails or
 * if either s1 or s2 is NULL, return NULL.
 * Otherwise, return a pointer to the newly concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int len = 0, len_2 = 0, count = 0, count_2 = 0;

	if (s1 != NULL)
	{
		len = strlen(s1);
	}
	if (s2 != NULL)
	{
		len_2 = strlen(s2);
	}
	array = malloc(sizeof(char) * (len + len_2) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < len; count++)
	{
		array[count] = s1[count];
	}
	for (count_2 = 0; count_2 < len_2; count_2++)
	{
		array[count + count_2] = s2[count_2];
	}
	array[count + count_2] = '\0';

	return (array);
}
