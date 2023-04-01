#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: Value of string
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char uplow[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lowup[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0, j = 0; s[i] != '\0' && uplow[j] != '\0'; i++, j++)
		{
			if (s[i] == uplow[j])
			{
				s[i] = lowup[j];
				break;
			}
		}
	return (s);
}
