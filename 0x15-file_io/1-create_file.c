#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: A pointer to the name of file to be  created
 * @text_content: A pointer to string to be written in the file
 *
 * Return: 1, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int y, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (; text_content[len]; ++len)
			;

	y = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(y, text_content, len);

	if (y == -1 || i == -1)
		return (-1);

	close(y);

	return (1);
}