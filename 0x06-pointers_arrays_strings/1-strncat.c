#include "main.h"

/**
 *_strcat - concatenates two strings
 * @src: input val.
 * @dest: input val to be concatenated with src
 * @n: input val
 * Return: returns
 */

char *_strcat(char *dest, char *src, int n)
{

	int i, len = 0;


	while (src[len] != '\0')
	{
		len++;
	}
	while (len < n; &&src[len] != '\0')
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	dest[i] = '\0';
	return (src);
}
