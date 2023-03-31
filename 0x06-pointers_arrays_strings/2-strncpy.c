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
	int i, j, len = 0, len1 = 0;
	char *duplicate = dest;

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		len1++;

		if (j < len)
		{
			dest[i] = src[i];
		}	
	}

	if (len == 0 && len1 == 0)
	{
		char *cpy = dest;
		dest = src;
		src = cpy;
		printf("%s\n", src);
		printf("%s\n", dest);
	}
	return (duplicate);
}
