#include "main.h"
/**
 * rev_string - A function that reverses a string.
 * @s: The string to print
 */
void rev_string(char *s)
{
	int str_len = 0, arr_loc = 0, hold;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (arr_loc = 0; arr_loc < str_len / 2; arr_loc++)
	{
		hold = s[arr_loc];
		s[arr_loc] = s[str_len - arr_loc - 1];
		s[str_len - arr_loc - 1] = hold;
	}
}
