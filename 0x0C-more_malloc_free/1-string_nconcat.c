#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory;
	unsigned int len, len2;
	unsigned int c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	memory = malloc(sizeof(char) * (len + n + 1));

	if (memory == NULL)
		return (NULL);

	for (c1 = 0; c1 < len; c1++)
		memory[c1] = s1[c1];

	for (c2 = 0; c2 < n; c2++, c1++)
		memory[c1] = s2[c2];

	memory[c1] = '\0';

	return (memory);
}
