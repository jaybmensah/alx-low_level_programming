#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 * Return: pointer to new dog, NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *scooby;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	scooby = malloc(sizeof(dog_t));

	if (scooby == NULL)
		return (NULL);

	(*scooby).name = malloc(sizeof(char) * (len1 + 1));
	if ((*scooby).name == NULL)
	{
		free(scooby);
		return (NULL);
	}

	(*scooby).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*scooby).owner == NULL)
	{
		free(scooby);
		free((*scooby).name);
		return (NULL);
	}

	_strcpy((*scooby).name, name);
	_strcpy((*scooby).owner, owner);
	(*scooby).age = age;

	return (scooby);
}
