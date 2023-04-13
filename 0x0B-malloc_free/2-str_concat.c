#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: Value of s1
 * @s2: Value of s2
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
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
