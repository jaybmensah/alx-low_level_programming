#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name
 * @argc: number of things entered into command line
 * @argv: array that holds string values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
