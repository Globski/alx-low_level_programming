#include <stdio.h> 
#include "dog.h"  
/**
 * print_dog - prints a struct dog variable
 * @d: Pointer to the struct dog variable to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d != NULL) 
	{   
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		
		if (d->age >= 0)
			printf("Age: %.6f\n", d->age);
		else
			
			printf("Age: (nil)\n");
		
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
