#include "main.h"
/**
 * puts2 -  A function that prints every other character
 * of a string, starting with the first character.
 * @str: The string containing characters.
 */
void puts2(char *str)
{

	int str_len = 0;

	while (str[str_len] != '\0')
	{
		_putchar(str[str_len]);
		str_len += 2;
	}


	_putchar('\n');
}
