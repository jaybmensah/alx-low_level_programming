#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: placeholder for c
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int start = 48;
	int end = 57;
	int c;

	for (c = start; c <= end; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
