#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: placeholder for c
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int a;	

	int start = 48;
	int end = 57;

	for (a = start; a <= end; a++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
