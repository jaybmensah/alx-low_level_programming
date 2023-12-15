#include "main.h"

/**
 * get_endianness - get the endianness of the machine
 * 
 * Return: the endianness of the machine
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *p = (unsigned char *)&i;

	return (p[0] == 1);
}

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
		printf("little endian\n");
	else
		printf("big endian\n");
	return 0;
}
