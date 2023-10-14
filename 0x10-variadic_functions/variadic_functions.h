#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*
 * Description: Header file containing prototypes for all functions
 * used in the 0x0F-variadic_functions project.
 */

#include <stdarg.h>

/**
 * struct print - Struct to store format specifiers and
 * corresponding functions
 *
 * @selector: The format specifier character
 * @prnt: A function pointer to the printing function for the specifier
 */
typedef struct print
{
	char *selector;
	void (*prnt)(va_list args);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
