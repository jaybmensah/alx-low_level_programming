#include "main.h"

/**
 * read_textfile - reads a text file into a string
 * @filename: the file to read
 * @letters: the string to store the file in
 *
 * Return: 0 on success, -1 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		perror(filename);
		exit(EXIT_FAILURE);
	}

	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while ((read = getline(&line, &len, fp)) != -1)
	{
		if (strlen(line) == letters)
		{
			printf("%s\n", line);
		}
	}

	free(line);
	fclose(fp);

	return (0);
}
