#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition function
 * @a: Num 1
 * @b: Num 2
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: Num 1
 * @b: Num 2
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product function
 * @a: Num 1
 * @b: Num 2
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: Num 1
 * @b: Num 2
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo function
 * @a: Num 1
 * @b: Num 2
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
