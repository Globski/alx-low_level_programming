#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int cont, num;

	va_start(args, n);

	for (cont = 0; cont < n; cont++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && cont != (n - 1))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");


}
