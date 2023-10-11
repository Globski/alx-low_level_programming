#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int cont = 0;

	for (cont = 0; src[cont]; cont++)
		dest[cont] = src[cont];

	dest[cont] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newDog->name, name);
	newDog->owner = _strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
