#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * prnt_char - Function to print a character
 *
 * @args: A va_list with the character argument to be printed
 */
void prnt_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * prnt_int - Function to print an integer
 *
 * @args: A va_list with the character argument to be printed
 */
void prnt_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * prnt_float - Function to print a float
 *
 * @args: A va_list with the character argument to be printed
 */
void prnt_float(va_list args)
{
	float num;

	num = va_arg(args, double);
	printf("%f", num);
}

/**
 * prnt_str - Function to print a string
 *
 * @args: A va_list with the character argument to be printed
 */
void prnt_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Function to print according to a format
 *
 * @format: A list of format specifiers
 * @...: Variable arguments based on the format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int cont = 0;
	char *separator = "";

	print_t funcs[] = {
		{"c", prnt_char},
		{"i", prnt_int},
		{"f", prnt_float},
		{"s", prnt_str}
	};

	va_start(args, format);
	
	while (format && (*(format + cont)))
	{
		int cont1 = 0, cont2 = 0;

		while (cont2 < 4 && format[cont] != *funcs[cont2].selector)
		{
			cont2++;
		}

		if (cont2 < 4)
		{
			printf("%s", separator);
			funcs[cont2].prnt(args);
			separator = ", ";
		}
		cont++;
	}

	printf("\n");

	va_end(args);
}
