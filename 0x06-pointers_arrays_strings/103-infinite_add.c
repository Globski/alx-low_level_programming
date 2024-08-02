#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: Pointer to the result or 0 if the result cannot be stored.
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int sum, carry = 0;

	while (r_index >= 0 && (*n1 || *n2 || carry))
	{
		sum = carry;
		if (*n1)
		{
			sum += (*n1 - '0');
			n1--;
		}
		if (*n2)
		{
			sum += (*n2 - '0');
			n2--;
		}

		r[r_index] = (sum % 10) + '0';
		carry = sum / 10;
		r_index--;
	}

	if (r_index < 0 && carry > 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Pointer to the result or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0;

	while (n1[len_n1])
		len_n1++;
	while (n2[len_n2])
		len_n2++;

	if (size_r <= (len_n1 > len_n2 ? len_n1 : len_n2) + 1)
		return (0);

	n1 += len_n1 - 1;
	n2 += len_n2 - 1;
	r[size_r - 1] = '\0';
	return (add_strings(n1, n2, r, size_r - 2));
}
