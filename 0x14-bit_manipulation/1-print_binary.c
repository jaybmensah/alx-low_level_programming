#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a 
 * number.
 *
 * @n: Value of number to be converted.
 *
 * Return: Binary number.
 */

void print_binary(unsigned logn it n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
