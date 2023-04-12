#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - reads file
 *  @code: error value
 *  @message: file name
 */

void error_file(int code, char *message)
{
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", message);
		exit(98);
	}
	if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", message);
		exit(99);
	}
}
/**
 * copy - copy the content of one file to another
 * @file_from: source file
 * @file_to: target file
 * Return: 1 on success, -1 on failure
 */
void copy(char *file_from, char *file_to)
{
	int from, to, rd, wr;
	char *buffer[1024];

	from = open(file_from, O_RDONLY);
	if (from < 0)
		error_file(98, file_from);

	to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to < 0)
	{
		close(from);
		error_file(99, file_to);
	}
	do {
		rd = read(from, buffer, 1024);
		if (rd < 0)
			error_file(98, file_from);

		wr = write(to, buffer, rd);
		if (wr < rd)
			error_file(99, file_to);
	} while (wr == 1024);
	if (close(from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		close(to);
		exit(100);
	}
	if (close(to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

}
/**
 * main - copy the content of one file to another file
 * @argc: argument count
 * @argv: argument varibale
 * Return: 0 on success, -1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
				exit(97);
	}
	copy(argv[1], argv[2]);
	return (0);
}
