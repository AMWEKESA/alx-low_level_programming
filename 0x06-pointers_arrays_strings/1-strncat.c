#include "main.h"

/**
 *_strncat - concatenates two strings
 * @src: input val.
 * @dest: input val to be concatenated with src
 * @n: input val
 * Return: returns
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
