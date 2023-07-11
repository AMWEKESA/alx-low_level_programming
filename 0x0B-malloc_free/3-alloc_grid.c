#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: retun, else NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int **y;
	int i, j;

	if (height <= 0 || height <= 0)
		return (NULL);

	y = malloc(sizeof(int *) * height);
	if (y == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		y[i] = malloc(sizeof(int *) * width);
		if (y[i] == NULL)
		{

		for (j = 0; j < i; ++j)
		{
			free(y[j]);
		free(y);
		return (NULL);
		}
		}
	}
	return (y);
}
