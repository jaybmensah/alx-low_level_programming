#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

#include "main.h"
#include <stddef.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: Value of haystack.
 * @needle: Value of needle.
 *
 * Return: Pointer to the beginning of the located substring,
 * or Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len = _strlen(haystack) - _strlen(needle) + 1;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < _strlen(needle); j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
/* If the entire ndle string was found, return pointer to start of sstring */
		if (j == _strlen(needle))
			return (&haystack[i]);
	}

	return (NULL);
}
