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
	int match = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			match = 0;

		else
			match = 1;
	}

	return (match);
}
