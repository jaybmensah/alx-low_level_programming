#include "main.h"
#include <stdlib.h>

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Value of s.
 * @b: Value of b.
 * @n: Value of n
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * _calloc - A function that allocates memory for an array, using
 * malloc.
 * @nmemb: Value of nmed
 * @size: Value of size
 *
 * Return: Pointer to the new allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myStr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myStr = malloc(size * nmemb);

	if (myStr == NULL)
		return (NULL);

	_memset(myStr, 0, nmemb * size);

	return (myStr);
}
