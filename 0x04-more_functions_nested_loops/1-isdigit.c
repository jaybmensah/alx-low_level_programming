#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: is digit character
 * Return: Always 0.
 */

int _digit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
