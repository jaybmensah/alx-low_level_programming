#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: Value of string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	char *encstr = (char *)malloc(strlen(str) + 1);
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = str[i] - 97;
			j = (j + 13) % 26;
			encstr[i] = j + 97;
		}

		else if (str[i] >= 65 && str[i] <= 90)
		{
			j = str[i] - 65;
			j = (j + 13) % 26;
			encstr[i] = j + 65;
		}

		else
		{
			encstr[i] = str[i];
		}
	}
	encstr[i] = '\0';
	return (encstr);
}
