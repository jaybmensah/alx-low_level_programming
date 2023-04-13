#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that frees my2Darr.
 * @ac: Argument counter
 * @av: Argument vecotr
 * Return: concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	char *stPtr;
	int ctr, i, j, k;

	for (i = 0, ctr = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ctr++)
			;
		ctr++;
	}
	ctr++;

	stPtr = malloc(ctr * sizeof(char));
	if (stPtr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			stPtr[k] = av[i][j];
			k++;
		}

		stPtr[k] = '\n';
		k++;
	}

	stPtr[k] = '\0';

	return (stPtr);
}
