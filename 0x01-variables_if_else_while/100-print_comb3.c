#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = i + 1;

	while (i <= 8)
	{
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	return (0);
}
