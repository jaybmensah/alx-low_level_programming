#include "main.h"

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
 * remove_existing_file - Removes the existing file if it exists.
 * @file_to: The name of the file to be removed.
 */
void remove_existing_file(const char *file_to)
{
	struct stat st;

	if (stat(file_to, &st) == 0)
	{
		if (S_ISREG(st.st_mode))
		{
			if (unlink(file_to) == -1)
				handle_error("Can't remove file", file_to, 99);
		}
		else
		{
			handle_error("Can't write to", file_to, 99);
		}
	}
}

/**
 * copy_file_contents - Copies the contents of one file to another file.
 * @src_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file_contents(int src_fd, int dest_fd,
const char *file_from, const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t num_bytes_read, num_bytes_written;

	while ((num_bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		num_bytes_written = write(dest_fd, buffer, num_bytes_read);
		if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
			handle_error("Can't write to", file_to, 99);
	}

	if (num_bytes_read == -1)
		handle_error("Can't read from file", file_from, 98);
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
	int src_fd, dest_fd;

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", "", 97);

	file_from = argv[1];
	file_to = argv[2];

	src_fd = open(file_from, O_RDONLY);

	if (src_fd == -1)
		handle_error("Can't read from file", file_from, 98);

	remove_existing_file(file_to);

	dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest_fd == -1)
		handle_error("Can't write to", file_to, 99);

	copy_file_contents(src_fd, dest_fd, file_from, file_to);

	if (close(src_fd) == -1)
		handle_error("Can't close fd", file_from, 100);

	if (close(dest_fd) == -1)
		handle_error("Can't close fd", file_to, 100);

	return (0);
}
