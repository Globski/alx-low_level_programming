#include "main.h"
/**
 * rot13 - A function that encodes a string using rot13.
 *
 * @s: The input string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *s)
{
	int result, root;
	char alphabet[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	char rot13key[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (result = 0; s[result]; result++)
	{
		for (root = 0; root < 52; root++)
		{
			if (s[result] == alphabet[root])
			{
				s[result] = rot13key[root];
				break;
			}
		}


	}

	return (s);
}
