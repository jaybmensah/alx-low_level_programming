#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: declaration of n in function
 * Return: the diagonal lines.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == i)
			{
				putchar('\\');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
