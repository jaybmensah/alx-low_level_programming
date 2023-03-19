#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num = num + 1;
	}

	putchar('\n');
	return (0);
}
