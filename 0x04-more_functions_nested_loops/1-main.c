#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = '0';
	_putchar(_isdigit(c));
	c = '9';
	_putchar(_isdigit(c));

	return (0);
}
