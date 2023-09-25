#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing the characters to count.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int count_1, count_2;

	for (count_1 = 0; s[count_1] != '\0'; count_1++)
	{
		for (count_2 = 0; accept[count_2] != '\0'; count_2++)
		{
			if (s[count_1] == accept[count_2])
			{
				count++;
				break;
			}
		}
		if (accept[count_2] == '\0')
		{
			return (count);
		}
	}

	return (count);
}
