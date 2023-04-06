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
 * _sqrt - A function that returns the natural
 * square root of a number.
 * @n: Value of n
 *
 * Return: squar root of n
 */
int _sqrt(int n)
{
	return (root_fxn(n, 0));
}

/**
 * is_prime_num_fxn - Support fxn for is_prime_number
 * @n : Value of n
 * @i : Value of i.
 * Return: 1 for prime number, 0 otherwise
 */
int is_prime_num_fxn(int n, int i)
{
	if (i < 2)
		return (1);
	else if (n % i == 0)
	{
		return (0);
	}
	else
		return (is_prime_num_fxn(n, i - 2));
}

/**
 * is_prime_number - Write a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n : Value of n
 *
 * Return: 1 for prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1 || (n > 2 && n % 2 == 0))
		return (0);
	else
		return (is_prime_num_fxn(n, _sqrt(n)));
}
