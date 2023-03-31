#include "main.h"

/**
 * _strncpy - Copies a strings
 * @dest: Value of destination
 * @src: Value of source
 * @n: value of n
 * Return: copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
