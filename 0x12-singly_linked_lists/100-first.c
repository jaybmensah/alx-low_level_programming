#include <stdio.h>

void before_the_main(void) __attribute__ ((constructor));

/**
 * before_the_main - prints a string before main function is executed
 *
 * Return: void
 */
void before_the_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
