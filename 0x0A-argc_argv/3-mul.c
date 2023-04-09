#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies 2 numbers
 * @argc: number of things entered into command line
 * @argv: array that holds string values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
