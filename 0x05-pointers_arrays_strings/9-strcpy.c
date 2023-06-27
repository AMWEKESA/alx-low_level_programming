#include "main.h"

/**
 * *_strcpy - coppies string pointed to src
 * @dest: where to copy the files
 * @src: where filea are coppied from
 * Return: returns
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}	i++;

	dest[i] = '\0';

	return (dest);
}
