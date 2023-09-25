#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: A pointer to the string to search in.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *srh = haystack;
		char *srh_1 = needle;

		while (*srh_1 && *srh == *srh_1)
		{
			srh++;
			srh_1++;
		}

		if (*srh_1 == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');
}
