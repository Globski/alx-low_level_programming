#include "main.h"
/**
 * is_palindrome_recursive - Checks if a string is a palindrome
 * using recursion.
 *
 * @s: The input string to check.
 * @open: The index of the current opening character.
 * @close: The index of the current closing character.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int open, int close)
{

	if (open >= close)
	{
		return (1);
	}

	if (s[open] != s[close])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, open + 1, close - 1));
}


/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }

    return (1 + _strlen(s + 1));
}


/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;
	return (is_palindrome_recursive(s, 0, len));
}
