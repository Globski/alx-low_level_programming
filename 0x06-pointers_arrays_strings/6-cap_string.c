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
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (i == 0 || s[i - 1] == ' ' ||
					s[i - 1] == '\t' || s[i - 1] == '\n' ||
					s[i - 1] == ',' || s[i - 1] == ';' ||
					s[i - 1] == '.' || s[i - 1] == '!' ||
					s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i - 1] == '(' || s[i - 1] == ')' ||
					s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] - 'a' + 'A' : s[i];
			}
		}

		i++;
	}
	return (s);
}
