#include "main.h"

/**
 * append_text_to_file - Append text at file end
 *
 * @filename: A pointer to the name of the file.
 * @text_content: string to be appened.
 *
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int y, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	x = write(y, text_content, len);

	if (y == -1 || x == -1)
		return (-1);

	close(y);

	return (1);
}