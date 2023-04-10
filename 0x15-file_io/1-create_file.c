#include "main.h"

/**
 * create_file - func that creates a file
 * @filename: name of file to create
 * @text_content: a string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrlen, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		return (-1);
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrlen = write(fd, text_content, len);

	if (fd == -1 || wrlen == -1)
		return (-1);

	close(fd);

	return (1);
}