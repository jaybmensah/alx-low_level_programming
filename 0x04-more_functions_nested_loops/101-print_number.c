#include "main.h"
#include <stdio.h>
/**
 * print_number - function that prints an integer.
 * @n: Placeholder for the integer n.
 * Return: show the printed number.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
