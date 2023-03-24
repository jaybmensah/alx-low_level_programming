#include "main.h"
/**
 * print_most_numbers - prints numbers, from 0 to 9, ommiting 2 and 4.
 * prints the numbers, from 0 to 9, ommitting 2 and 4.
 * Return: the printed numbers.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2 || i == 4)
		{
			break;
		}
		_putchar(i);
	}
	_putchar('\n');
}
