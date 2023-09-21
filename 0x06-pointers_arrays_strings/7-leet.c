#include "main.h"
/**
 * leet - A function that encodes a string into 1337.
 *
 * @str: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i;
	char *p = str;
	char *leet_l = "aAeEoOtTlL";
	char *leet_plm = "4433007711";

	while (*str != '\0')
	{
		for (i = 0; leet_l[i] != '\0'; i++)
		{
			if (*str == leet_l[i])
			{
				*str = leet_plm[i];
				break;
			}
		}
		str++;
	}

	return (p);
}
