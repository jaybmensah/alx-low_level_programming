#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Value of s
 * Return: Nothing
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * is_palindrome_help - checks if a given string is a palindrome
 * @str: Value of s
 * @rhs: Value of rhs
 * @lhs: Value of lhs
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome_help(char *str, int lhs, int rhs)
{
	if (lhs >= rhs)
	{
		return (1);
	}
	else if (str[lhs] == str[rhs])
	{
		return ((is_palindrome_help(str, lhs + 1, rhs - 1)));
	}
	else
		return (0);
}

/**
 * is_palindrome - A fxn that checks if string is palindrome
 * @s: Value of s
 *
 * Return:1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (is_palindrome_help(s, 0, len - 1));
}
