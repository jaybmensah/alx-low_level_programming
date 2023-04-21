#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - A function that prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sprTr = "";

	va_list anyLst;

	va_start(anyLst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sprTr, va_arg(anyLst, int));
					break;
				case 'i':
					printf("%s%d", sprTr, va_arg(anyLst, int));
					break;
				case 'f':
					printf("%s%f", sprTr, va_arg(anyLst, double));
					break;
				case 's':
					str = va_arg(anyLst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sprTr, str);
					break;
				default:
					i++;
					continue;
			}
			sprTr = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(anyLst);
}
