#include "main.h"
/**
 * more_numbers - prints numbers, from  to 14, 10 times.
 * Return: the printed numbers.
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '1'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (j == '1' && k <= '4')
				{
					_putchar(j);
				}

				if (!(j == '1' && k > '4'))
				{
					_putchar(k);
				}
			}
		}
	_putchar('\n');
	}
}
