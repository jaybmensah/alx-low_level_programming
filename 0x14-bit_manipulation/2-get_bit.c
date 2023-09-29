#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Value of n
 * @index: The index of the bit in focus
 * Return: Value of bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
