#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	
	r = _isupper('H');
	_putchar(r + '0');
	r = _isupper('o');
	_putchar(r + '0');
	r = _isupper(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
