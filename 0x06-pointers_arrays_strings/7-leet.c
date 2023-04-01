#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Value of string
 *
 * Return: Encode 1337
 */
char *leet(char *s)
{
	int i, j;
	char lowup[] = "aAeEoOtTlL";
	char digs[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (lowup[j] == s[i])
				s[i] = digs[j];
		}
	}
	return (s);
}
