#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @int: computes the absolute value of an integer.
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (1);
	}

	else if (n <= 0)
	{
		n = n * -1;
		return (n);
	}

	return (0);
}
