#include "main.h"

/**
 * print_alphabet - prints alphabets
 * This function that prints alphabet in lower case
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
