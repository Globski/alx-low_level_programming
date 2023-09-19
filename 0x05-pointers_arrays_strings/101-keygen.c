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

	char keys[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY0123456789";
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
