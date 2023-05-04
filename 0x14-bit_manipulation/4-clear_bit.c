#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at
 * a given index.
 * @n: Value of n
 * @index: The index of the bit in focus
 * Return: 1 if success or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
