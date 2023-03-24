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

	c = 'A';
	_putchar(_isupper(c));
	c = 'a';
	_putchar(_isupper(c));

	return (0);
}
