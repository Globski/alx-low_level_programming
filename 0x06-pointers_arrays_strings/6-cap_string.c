#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @s: The input string
 *
 * Return:  A pointer to the modified string.
 */
char *cap_string(char *s) {

	if (s == 0 || *s == '\0') {
		return s;  
	}

	if (*s >= 'a' && *s <= 'z') {
		*s -= ('a' - 'A');  
	}

	return s;
}
