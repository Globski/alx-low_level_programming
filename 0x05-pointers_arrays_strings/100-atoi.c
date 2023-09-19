#include "main.h"
/**
 * _atoi - A function that convert a string to an integer.
 *  @s: The string to convert
 *
 * Return: The value of the converted string.
 */
int _atoi(char *s)
{
	unsigned int total = 0;
	unsigned int holder;
	int op_rator = 1;

	while (*s)
	{
		if (*s == '-')
		{
			op_rator *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			total = total * 10 + (*s - '0');
		}
		else if (total != 0)
		{
			break;
		}
		s++;
	}
	holder = op_rator * total;

	return (holder);
}
