#include "main.h"

/**
 * int _strlen - function that returns the length of a string.
 * @s : pointer to variable of type char
 * Return : Always 0. Success
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
