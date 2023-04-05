#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: Pointer to the address of the variable of type char
 * @to: Pointer to the address of the variable of type char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
