#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints opcodes of its own main function.
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int numbyte, i;
	char *chk;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbyte = atoi(argv[1]);

	if (numbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	chk = (char *)main;

	for (i = 0; i < numbyte; i++)
	{
		if (i == numbyte - 1)
		{
			printf("%02hhx\n", chk[i]);
			break;
		}
		printf("%02hhx ", chk[i]);
	}
	return (0);
}
