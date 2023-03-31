#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Value of s1
 * @s2: Value of s2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
