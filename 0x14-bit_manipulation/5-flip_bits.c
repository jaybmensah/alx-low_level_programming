#include "main.h"

/**
 * flip_bits - A function that returns the number
 * of bits needed to flip to get from one number to another
 * @n: Number one
 * @m: Number two
 *
 * Return: The number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped_result = n ^ m;
	unsigned int needed_bits = 0;

	while (flipped_result)
	{
		needed_bits += flipped_result & 1;
		flipped_result >>= 1;
	}

	return (needed_bits);
}

