#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - exeute function given as parameter
  *
  * @array: pointer to function taking taking functions as array
  * @size: size of the array
  * @action: pointer to function to be used
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
