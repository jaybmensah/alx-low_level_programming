#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: Value of s.
 * @accept: Value of accept.
 *
 * Return: Number of bytes in the initial segment
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' && _strchr(accept, s[i]) != NULL; i++)
	{
		return (i);
	}

	return (0);
}
