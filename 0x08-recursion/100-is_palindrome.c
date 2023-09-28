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
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (is_palindrome_recursive(s, 0, len - 1));
}

