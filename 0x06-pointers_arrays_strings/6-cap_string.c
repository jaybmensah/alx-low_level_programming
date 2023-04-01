#include "main.h"

/**
 * cap_string - Convert lowercase to uppercase
 * @s: Value of string
 *
 * Return: Fist case upper
 */
char *cap_string(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
            if (s[i] == 0 || s[i - 1] == ' ')
            {
                if (s[i] >= 97 && s[i] <= 122 && s[0] != '\0')
                {
                        s[i] = s[i] - 32;
                }
            }
    }

    return (s);
}
