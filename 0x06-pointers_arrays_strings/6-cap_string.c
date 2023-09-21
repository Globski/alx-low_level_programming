#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @s: The input string
 *
 * Return:  A pointer to the modified string.
 */
char *cap_string(char *s)
{

	int i = 0;
	
	if (!s)
		return (s);


	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';


			while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' &&
					s[i] != ',' && s[i] != ';' &&
					s[i] != '.' && s[i] != '!' && s[i] != '?' &&
					s[i] != '"' && s[i] != '(' &&
					s[i] != ')' && s[i] != '{' && s[i] != '}' && s[i] != '\0')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}

	return (s);
}
