#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Value of destination
 * @src: Value of source
 * Return: concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
