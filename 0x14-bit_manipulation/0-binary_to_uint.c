#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned integer.
 * @b : Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, 0 if no 0 or 1 characters or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0' && (*b == '0' || *b == '1'))
	{
		total = (total << 1) + (*b - '0');
		b++;
	}

	if (*b != '\0')
		return (0); /*That is when there's an invalid char*/

	return (total);
}
