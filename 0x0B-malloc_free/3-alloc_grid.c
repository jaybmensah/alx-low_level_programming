#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a ptr to 2DA of integers.
 * @width: Value of width
 * @height: Value of height
 * Return: 2DA of integers.
 */
int **alloc_grid(int width, int height)
{
	int **my2Darr;
	int countr, ctr2;

	/* check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* determine the size of my2Darr */
	my2Darr = (int **) malloc(height * sizeof(int *));

	/* check my2Darr is null */
	if (my2Darr == NULL)
		return (NULL);

	/* create 2DArr */
	for (countr = 0; countr < height; countr++)
	{
		my2Darr[countr] = (int *) calloc(width, sizeof(int));
		if (my2Darr[countr] == NULL)
		{
			for (ctr2 = 0; ctr2 < countr; ctr2++)
			{
				free(my2Darr);
			}
			free(my2Darr);
			return (NULL);
		}
	}

	return (my2Darr);
}
