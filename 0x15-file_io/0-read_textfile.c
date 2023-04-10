#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads txt file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters it could actually read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rdlen, wrlen;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	rdlen = read(fd, buffer, letters);
	if (rdlen == -1)
	{
		free(buffer);
		return (0);
	}

	wrlen = write(STDOUT_FILENO, buffer, rdlen);
	if (wrlen == -1 || rdlen != wrlen)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wrlen);
}

