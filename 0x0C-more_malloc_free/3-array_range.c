#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: min val o array
 * @max: max val of array
 * @*x: ppointer to array
 *
 * Return: pointer to array,else NULL
 */

int *array_range(int min, int max)
{
	int *x, i;

	if (max < min)
		return (NULL);

	x = malloc(size;of(int) * (max + min + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; ++min, ++i)
	{
		x[i] =min;
	}

	return (x);
}
