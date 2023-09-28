#include "main.h"
/**
 * is_prime_recursive - check for prime recursively
 *
 * @n: The number to check for primality.
 * @count: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int count)
{

	if (n <= 1)
	{
		return (0);
	}
	if (count <= 1)
	{
		return (1);
	}
	if (n % count == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, count - 1));
}



/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
