#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: Value of b.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *myPtr;

	myPtr = malloc(b);

	if (myPtr == NULL)
		exit(98);

	return (myPtr);
}
