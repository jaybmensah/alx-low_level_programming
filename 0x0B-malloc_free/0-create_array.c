#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Number of characters
 * Return: Pointer to array of Null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myarray;

	if (size == 0)
		return (NULL);

	myarray = malloc(sizeof(char) * size);

	if (myarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myarray[i] = c;
	}

	return (myarray);
}
