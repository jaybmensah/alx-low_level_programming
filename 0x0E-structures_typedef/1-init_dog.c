#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type
 * struct dog
 * @d: struct of dog
 * @name: value of name
 * @age: value of age
 * @owner: value of owner
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}