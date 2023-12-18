#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename : Pointer to the filename to be read.
 * @letters : Number of letters to be read and printed.
 *
 * Return: Number of letters it could read and print.
 * 0 if file cannot be opened, is NULL, write fails or
 * does not read the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	ssize_t r_count;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		free(buff);
		return (0);
	}

	r_count = fread(buff, sizeof(char), letters, fptr);

	if (r_count == 0 || write(STDOUT_FILENO, buff,
		r_count) != r_count)
	{
		free(buff);
		fclose(fptr);
		return (0);
	}

	free(buff);
	fclose(fptr);
	return (r_count);
}
