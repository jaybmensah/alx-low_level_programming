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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len++;
	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			len1++;

	if (n < len1)
		myStr = malloc(sizeof(char) * (len + n + 1));
	else
		myStr = malloc(sizeof(char) * (len + len1 + 1));

	if (myStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		myStr[i] = s1[i];

	j = 0;
	for (i = len; i < len + n && s2[j] != '\0'; i++, j++)
		myStr[i] = s2[j];

	myStr[i] = '\0';
	return (myStr);
}
