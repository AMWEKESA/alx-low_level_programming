#include "main.h"
#include <stdlib.h>


/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory,exit with val of 98
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);

}
