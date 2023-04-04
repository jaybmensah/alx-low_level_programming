#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: Value of s.
 * @c: Value of c.
 *
 * Return: Pointer first occurence of c in string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}

	return (0);
}

/**
 * _strspn - A function that gets the lengthe of a prefix substring.
 * @s: Value of s.
 * @accept: Value of accept
 * Return: Number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' && _strchr(accept, s[i]) != NULL; i++)
	{
		/* return (i); */
	}

	return (i);
}
