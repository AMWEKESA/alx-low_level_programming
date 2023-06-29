#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer string to
 * @src: string to be copied
 * @n: max characters to be copied
 * Return: returns a pointer to the destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
