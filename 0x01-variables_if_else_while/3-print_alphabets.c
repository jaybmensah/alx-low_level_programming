#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LetteR = 'A';

	while (letter <= 'z')
	{
		while (letter <= 'Z')
		{
			putchar(LetteR);
			LetteR++;
		}
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
