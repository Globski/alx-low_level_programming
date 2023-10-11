#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A function pointer to the print function.
 *
 * Description: This function takes a name and a function pointer to a print
 * function. It checks if the name and function are not NULL, and if they are
 * not, it calls the provided function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	if (name != NULL && f != NULL)
		f(name);
}
