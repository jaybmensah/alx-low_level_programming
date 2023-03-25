#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: declaration of n in function
 * Return: the printed lines.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
