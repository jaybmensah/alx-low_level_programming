#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - A function that prints numbers ff'd by \n.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of parameters
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numsPrd;
	unsigned int i;

	/**if (separator = '\0')**/
		/**return;**/

	va_start(numsPrd, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numsPrd, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numsPrd);
}
