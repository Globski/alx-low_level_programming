#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: A number less than, equal to, or greater than zero
 * if s1 match s2 return 0 to indicate that the strings are equal.
 * if s1 is less than s2 or s1 is greater than s2.
 * return the difference between the ASCII values of the mismatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;

	}

	return (*s1 - *s2);
}
