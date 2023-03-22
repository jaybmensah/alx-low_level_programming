#include "main.h"

/**
 * main - this function print_alphabets
 * Written by Jay B
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int start = 97;
	int end = 122;
	int i;

	for (i = start; i <= end; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
