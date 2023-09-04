#include "main.h"

/**
 * read_textfile- Read text file & print it to STDOUT
 *
 * @filename: text file to be read
 * @letters: letters to be read
 *
 * Return: number of bytes read and printed, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t y;
	ssize_t i;
	ssize_t x;

	y = open(filename, O_RDONLY);
	if (y == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	x = read(y, buffer, letters);
	i = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(y);

	return (i);
}
