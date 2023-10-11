#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
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

	newDog->name = malloc(sizeof(char) * strlen(name) + 1);
	newDog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	newDog->age = age;
	return (newDog);
}

