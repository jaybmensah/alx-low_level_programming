#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates a memory block using
 * malloc and free.
 * @ptr: a pointer to the memory prv allocated with malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size:  the new size, in bytes of the new memory block
 * Return: Pointer to new memory block allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *myPtr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	myPtr = malloc(new_size);
	if (myPtr == NULL)
	{
		return (NULL);
	}

	memcpy(myPtr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (myPtr);
}

