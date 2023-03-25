#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: declaration of n in function
 * Return: the diagonal lines.
 */

void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j <= i)
				{
					if (j == i)
						_putchar('\\');
					else
						_putchar(' ');
				}
				else
				{
					if (j == n)
						_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
