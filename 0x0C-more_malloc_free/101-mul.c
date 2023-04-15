#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * product - multiplies two integers.
 * @num1: the first integer to multiply.
 * @num2: the second integer to multiply
 * Return: the product of num1 and num2
 */
int product(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - multiplies two positive numbers passed as command-line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('R');
		_putchar('R');
		_putchar('O');
		_putchar('R');
		_putchar('\n');

		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				_putchar('E');
				_putchar('R');
				_putchar('R');
				_putchar('O');
				_putchar('R');
				_putchar('\n');

				exit(98);

			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = product(num1, num2);
	printf("%d\n", result);
	return (0);
}
