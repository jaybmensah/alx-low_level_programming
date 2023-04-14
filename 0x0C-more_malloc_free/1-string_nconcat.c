#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: Value of s1
 * @s2: Value of s2
 * @n: Value of n
 * Return: Pointer to the new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *myStr;
	unsigned int i, j, len = 0, len1 = 0;

	for (i = 0; s1 && s1[i]; i++)
		len++;
	for (i = 0; s2 && s2[i]; i++)
		len1++;

	if (n < len1)
	{
		myStr = malloc(sizeof(char) * (len + n + 1));
	}
	else
	{
		myStr = malloc(sizeof(char) * (len + len1 + 1));
	}

	if (!myStr)
		return (NULL);

	for (i = 0; i < len; i++)
		myStr[i] = s1[i];

	j = 0;
	for (i = len; n < len1 && i < (len + n); i++, j++)
		myStr[i] = s2[j];

	myStr[i] = '\0';

	return (myStr);
}
