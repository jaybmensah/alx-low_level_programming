#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of args passed
 * @argc: number of things entered into command line
 * @argv: array that holds string values
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
