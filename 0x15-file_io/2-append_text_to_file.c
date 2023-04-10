#include "main.h"

/**
 * append_text_to_file - func that appends text at the end of a file
 * @filename: name of file
 * @text_content: a string to add to the enf of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrlen, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		wrlen = write(fd, text_content, len);

		if (wrlen == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
