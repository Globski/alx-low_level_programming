#include "main.h"
/**
 * sqrt_recursive - Returns the natural square root of a number recursively
 *
 * @n: The number for which to find the square root
 * @estimate: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int sqrt_recursive(int n, int estimate)
{
	if (n < 0)
	{
		return (-1);
	}
	if (estimate * estimate == n)
	{
		return (estimate);
	}
	if (estimate * estimate > n)
	{
		return (-1);
	}
	return (sqrt_recursive(n, estimate + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 0));
}
