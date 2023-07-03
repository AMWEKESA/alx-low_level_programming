#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: where to copy
 * @src: where to copy from
 * @n: bytes to be coppied
 * Return: returns
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		memcpy(dest + i, src + i, 1);
	}
	return (dest);
}
