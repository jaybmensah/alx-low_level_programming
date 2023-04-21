#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: constant value
 * @...: variable number of parameters
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_ptr, int);

	va_end(arg_ptr);

	return (sum);
}
