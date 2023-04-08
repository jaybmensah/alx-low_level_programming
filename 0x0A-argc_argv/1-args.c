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
	int i;

	for (i = 0; i <= argc; i++);

	printf("%d\n", i);

	return (0);
}
