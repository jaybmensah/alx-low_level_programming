/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int test = 1;
	char *byte_ptr = (char *)&test;

	if (*byte_ptr == 1)
	{
		/* Little endian */
		return (1);
	}
	else
	{
		/* Big endian */
		return (0);
	}
}
