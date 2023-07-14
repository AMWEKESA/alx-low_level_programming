#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size of mem priviously allocated
 * @new_size: size of reallocated mem
 *
 * Return: pointer to new memory, else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		i = malloc(new_size);
		return (i);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = malloc(new_size);
	if (i == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		memcpy(i, ptr, new_size);
	} else
	{
		memcpy(i, ptr, old_size);
	}
	free(ptr);
	return (i);
}
