#include "main.h"

/**
 * _isalpha - checks for alphabetic charachter.
 * @c: is a letter
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
