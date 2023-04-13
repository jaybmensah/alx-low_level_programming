#include "main.h"
#include <stdlib.h>

/**
 * _strup - A function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Value of str
 *
 * Return: Pointer to dupliacted string.
 */
char *_strdup(char *str)
{
	char *stPtr;
	int lenStr, countr;

	/* find string length */
	for (lenStr = 0; str[lenStr] != '\0'; lenStr++);

	/* determine the size of stPtr and allocate memory */
	stPtr = malloc((lenStr * sizeof(char)) + 1);
	
	/* check if stPtr is null */
	if (stPtr == NULL)
	{
		return (NULL);
	}

	/* copy string to new location */
	for (countr = 0; str[countr] != '\0'; countr++)
	{
		stPtr[countr] = str[countr];
	}
	stPtr[countr] = '\0';

	return (stPtr);
}
