#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - seraches for an integer
  *
  * @array: pointer to array of functions
  * @size: size of array
  * @cmp: pointer to function to be used for comparison
  *
  * Return: index of 1st element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
