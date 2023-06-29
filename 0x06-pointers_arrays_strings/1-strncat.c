#include "main.h"

/**
 *_strcat - concatenates two strings
 * @src: string to be conatenated wit dest
 * @dest: string to be concatenated with src
 * Return: returns
 */

char *_strcat(char *dest, char *src)
{

	int i, len = 0;


	while (dest[i] != '\0')
	{
		i++;
	}
	for (i = 0; src[len] != '\0'; len++, i++)
	{
		dest[i] = src[len];
	}
	dest[i] = '\0';
	return (dest);
}
