#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dog
 * @d: Pointer to the dog structure to be freed
 *
 * Description:This function frees the memory allocated for the dog structure,
 * including the dynamically allocated memory for the name and owner fields.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
