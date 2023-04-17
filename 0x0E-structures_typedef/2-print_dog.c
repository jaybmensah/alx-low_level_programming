#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - A function that prints a struct
 *
 * @d: struct of dog
 * Return: Prints class dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	if ((*d).age == 0.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);

	if ((*d).name == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);

	if (d == NULL)
		printf("\n");
}
