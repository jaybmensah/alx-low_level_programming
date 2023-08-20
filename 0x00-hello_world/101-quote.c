#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print to standard error
 *
 * Return: Always success
 */

int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	ssize_t bytes_written = write(STDERR_FILENO, quote, strlen(quote));

	if (bytes_written == -1)
	{
		perror("write");
		return (1);
	}

	return (1);
}
