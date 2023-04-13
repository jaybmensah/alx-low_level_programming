#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees my2Darr.
 * @grid: Value of width
 * @height: Value of height
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int countr;

	for (countr = 0; countr < height; countr++)
	{
		free(grid[countr]);
	}
	free(grid);
}
