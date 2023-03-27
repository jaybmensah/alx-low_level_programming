#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a : declaration of pointer to variable of type int.
 * @b : declaration of pointer to variable of type int.
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
