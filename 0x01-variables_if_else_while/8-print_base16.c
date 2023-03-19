#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = 0;
	char hexadec = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num = num + 1;
	}

	while (hexadec <= 'f')
	{
		putchar(hexadec);
		hexadec++;
	}

	putchar('\n');
	return (0);
}
