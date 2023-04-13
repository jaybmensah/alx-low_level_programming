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
	int lenStr1, lenStr2, countr1, ctr2;

	/* check if s1 and s2 are NULL */
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	/* find string length1 */
	for (lenStr1 = 0; s1[lenStr1] != '\0'; lenStr1++)
		;

	/* find string length2 */
	for (lenStr2 = 0; s2[lenStr2] != '\0'; lenStr2++)
		;

	/* determine the size of stPtr and allocate memory */
	stPtr = malloc(lenStr1 + lenStr2 + 1);

	/* check if s1 and s2 is null */
	if (stPtr == NULL)
		return (NULL);

	/* concatenate string1 to string 2 */
	for (countr1 = 0; s1[countr1] != '\0'; countr1++)
		stPtr[countr1] = s1[countr1];

	for (ctr2 = 0; s2[ctr2] != '\0'; ctr2++)
		stPtr[lenStr1 + ctr2] = s2[ctr2];

	stPtr[ctr2 + countr1 + 1] = '\0';

	return (stPtr);
}
