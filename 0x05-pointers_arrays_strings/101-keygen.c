#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for the
 *        program 101-crackme and prints the total ASCII sum.
 *
 * Return: Always 0.
 */
int main(void)
{
	char keys[84];
	int arr_loc = 0, total = 0, diff;

	srand(time(0));

	while (total < 2772)
	{
		keys[arr_loc] = 33 + rand() % 94;
		total += keys[arr_loc++];
	}

	keys[arr_loc] = '\0';

	if (total != 2772)
	{
		diff = total - 2772;
		for (arr_loc = 0; keys[arr_loc]; arr_loc++)
		{
			if (keys[arr_loc] >= (33 + diff))
			{
				keys[arr_loc] -= diff;
				break;
			}
		}
	}

	printf("%s\n", keys);
	return (0);
}
