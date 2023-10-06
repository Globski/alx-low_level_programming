#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string.
 */

char *argstostr(int ac, char **av)
{

	int len = 0;
	char *array;
	int count, count_2, count_3 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		for (count_2 = 0; av[count][count_2] != '\0'; count_2++)
		{
			len++;
		}
		len++;
	}
	array = malloc((sizeof(char) * len) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		for (count_2 = 0; av[count][count_2] != '\0'; count_2++)
		{
			array[count_3++] = av[count][count_2];
		}
		array[count_3++] = '\n';
	}

	array[count_3] = '\0';

	return (array);
}
