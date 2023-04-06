#include "main.h"

/**
 * root_fxn - checks for the root of a given number
 * @num : Value of num
 * @root : Value of root
 * Return: input for recursive fxn
 */
int root_fxn(int num, int root)
{
	if ((root * root) > num || root < 0)
	{
		return (-1);
	}
	else if (root * root == num)
		return (root);
	else
		return (root_fxn(num, root + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: Value of n
 *
 * Return: squar root of n
 */
int _sqrt_recursion(int n)
{
	return (root_fxn(n, 0));
}
