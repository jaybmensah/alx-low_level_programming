#include "main.h"

/**
 * factorial - A function that returns the fact! of a given num.
 *
 * @n: Value of n
 * Return: n Factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
