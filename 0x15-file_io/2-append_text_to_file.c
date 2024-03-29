#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the file to append to
 * @text_content: the text to append
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0, ap_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		ap_bytes = write(fd, text_content, length);
		if (ap_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
