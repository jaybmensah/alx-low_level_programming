#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case.
 * This function prints alphabets in lower case 10x
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int start = 97;
	int end = 122;
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = start; i <= end; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
