#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory location
 * @b: constant byte to fill
 * @n: number of bytes to be filled
 * Return: returns
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
