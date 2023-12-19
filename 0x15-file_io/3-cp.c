#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Prints an error message and exits the program.
 * @message: The error message to be printed.
 * @filename: The name of the file associated with the error.
 * @exit_code: The exit code to be used when exiting the program.
 */
void handle_error(const char *message, const char *filename, int exit_code)
{
	fprintf(stderr, "Error: %s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or the appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int src_fd;
	int dest_fd;
	char buffer[BUFFER_SIZE];
	ssize_t num_bytes_read, num_bytes_written;

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", "", 97);

	file_from = argv[1];
	file_to = argv[2];

	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
		handle_error("Can't read from file", file_from, 98);

	dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
		handle_error("Can't write to", file_to, 99);

	while ((num_bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		num_bytes_written = write(dest_fd, buffer, num_bytes_read);

		if (num_bytes_written == -1)
			handle_error("Can't write to", file_to, 99);

	}

	if (num_bytes_read == -1)
		handle_error("Can't read from file", file_from, 98);

	if (close(src_fd) == -1)
		handle_error("Can't close fd", file_from, 100);

	if (close(dest_fd) == -1)
		handle_error("Can't close fd", file_to, 100);

	return (0);
}
