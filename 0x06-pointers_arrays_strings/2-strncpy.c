#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer to copy the string to
 * @src: source string to be copied
 * @n: maximum number of characters to be copied
 * Return: returns a pointer to the destination buffer
 */

char *_strncpy(char *dest, const char *src, int n)
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
