#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: Value of s.
 * @c: Value of c.
 *
 * Return: Pointer first occurrence of c in string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
