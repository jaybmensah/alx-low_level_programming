#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success, 0 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		length = strlen(text_content);
		if (write(fd, text_content, length) != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
