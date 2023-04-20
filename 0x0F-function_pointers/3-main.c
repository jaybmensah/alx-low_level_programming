#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - A program that performs simple operations.
 * @argc: The argument counter.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *optr;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	optr = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(optr) == NULL || optr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*optr == '/' && num2 == 0) ||
	    (*optr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(optr)(num1, num2));

	return (0);
}
