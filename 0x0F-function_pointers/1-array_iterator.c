#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to array of type int
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* using unsigned because of size_t */

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
