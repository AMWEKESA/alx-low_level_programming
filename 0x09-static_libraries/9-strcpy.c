#include "main.h"

/**
 * *_strcpy - coppies string pointed src
 * @dest: where to copy the files to
 * @src: where filea are coppied from
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
