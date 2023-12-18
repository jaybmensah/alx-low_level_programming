#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success, 0 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		perror("fopen");
		return -1;
	}
	fputs(text_content, fp);
	fclose(fp);
	return (0);
}