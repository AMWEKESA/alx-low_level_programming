#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_buffer - buffer of size 1024
 *
 * @file: file buffer is storing chars for
 *
 * Return: A pointer to buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close file descriptors
 *
 * @file_d: The file descriptor to be closed
 */

void close_file(int file_d)
{
	int x;

	x = close(file_d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - Copies contents of one file to another
 *
 * @argc: argument counter of number of args supplied
 * @argv: (arg vector) pointers to the arguments
 *
 * Return: 0 on success.
 *
 * Description: exit code 97 if incorrect arguements
 *             - exit code 98 if file_from doesn't exist/can't be read
 *             - exit code 99 if can't create/ write to file_to
 *             - exit code 100 if can't close file discriptor
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	rd = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (f_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(f_to, buffer, rd);
		if (f_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(f_from);
	close_file(f_to);
	return (0);
}
