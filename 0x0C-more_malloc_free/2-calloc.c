#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array to allocated memory
 * @size: size on nmemb
 *
 * Return: pointer to allocated mem, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == 0)
		return (NULL);

	for (i = 0; i < nmemb * size / sizeof(unsigned int); ++i)
	{
		x[i] = 0;
	}
	return (x);
}
