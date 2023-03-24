#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int start = 48;
	int end = 57;
	int i;

	for (i = start; i <= end; i++)
	{
		_putchar(i);
	}

	_putchar('\n')
}
