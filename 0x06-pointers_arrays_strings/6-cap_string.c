#include "main.h"

/**
 * cap_string - Convert lowercase to uppercase
 * @s: Value of string
 *
 * Return: Fist case upper
 */
char *cap_string(char *s)
{
	int i, upper = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0 || s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '{' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '}')
		{
			upper = 1;
		}

		else if (upper)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
			upper = 0;
		}
	}

	return (s);
}
