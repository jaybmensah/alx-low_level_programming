#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Value of destination
 * @src: Value of source
 * @n: value of n
 * Return: concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
