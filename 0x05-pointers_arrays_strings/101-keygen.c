#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid
 * passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{

	char keys[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
	     'u', 'v', 'w', 'x', 'y', 'z',
	     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	     'U', 'V', 'W', 'X', 'Y', 'Z',
	     '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	const unsigned int PASS_LEN = 60;
	unsigned int i, arr_loc;

	srand(time(0));

	char pass[PASS_LEN + 1];

	for (i = 0; i < PASS_LEN; i++)
	{
		arr_loc = rand() % (63 - 1);
		pass[i] = keys[arr_loc];
	}

	pass[PASS_LEN] = '\0';

	printf("Password: %s\n", pass);

	return (0);
}
