#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array with initial specific char
 *
 * @c: initial char
 * @size: array size
 * @y pointer to array
 * Return: retun null is empty, else pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int i;

	if (size == 0)
		return (NULL);

	y = malloc(sizeof(char) * size);
	if (y == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
	{
		y[i] = c;
	}

	return (y);
}
