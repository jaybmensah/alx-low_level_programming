#include "main.h"
/**
 * _puts - function that prints a string, ffd by a new line, to stdout.
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
