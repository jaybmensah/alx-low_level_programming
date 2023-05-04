#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int.
 * @b : Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, 0 if no 0 or 1 characters or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int strLength = strlen(b);
	int decimalVal = 1, i;

	if (b == NULL || strLength == 0)
		return (0);

	for (i = (strLength - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			total += decimalVal;

	decimalVal *= 2;
	}

	return (total);
}
