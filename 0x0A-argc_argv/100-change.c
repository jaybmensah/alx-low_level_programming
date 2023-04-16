#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints min coins for change
 * @argc: number of things entered into command line
 * @argv: array that holds string values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int no_coins = 0, cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("%d\n", 0);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		no_coins++;
	}
	printf("%d\n", no_coins);
	return (0);
}
