#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that fills memory with a constant byte.
 * @min: Min range of array values.
 * @max: Max range for array values.
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *myArr;
	int ctr, arrSize;

	if (min > max)
		return (NULL);

	arrSize = max - min + 1;
	myArr = malloc(sizeof(int) * arrSize);

	if (myArr == NULL)
		return (NULL);

	for (ctr = 0; min <= max; ctr++)
		myArr[ctr] = min++;

	return (myArr);
}

