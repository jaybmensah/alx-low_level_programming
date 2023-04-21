#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - A function that prints strings ff'd by \n.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of parameters
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numStr;
	char *str;
	unsigned int i;

	/**if (separator = '\0')**/
		/**return;**/

	va_start(numStr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(numStr, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numStr);
}
