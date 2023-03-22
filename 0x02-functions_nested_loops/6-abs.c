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
		return (n);
	}

	else
	{
		return (-1 * n);
	}

	return (0);
}
