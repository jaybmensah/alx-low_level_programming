#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: ponter to the address of variable char
 * @f: pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
