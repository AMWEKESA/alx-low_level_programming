#include "main.h"
/**
*_strcat - concatenates two strings
* @src: string to be conatenated wit dest
* @dest: string to be concatenated with src
* Return: returns
*/

char *_strcat(char *dest, char *src)
{

	int i, len;

	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
		dest[len] = '\0';
		return (dest);
}
