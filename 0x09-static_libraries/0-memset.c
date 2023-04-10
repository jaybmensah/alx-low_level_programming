#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Value of s.
 * @b: Value of b.
 * @n: Value of n
 * Return: Pointer to memory are s
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
