#include "main.h"
/**
*_strcat - concatenates two strings
* @src: string to be conatenated wit dest
* @dest: string to be concatenated with src
* Return: returns
*/

char *_strcat(char *dest, char *src)
{

	int i;

	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (dest[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
		dest[len] = '\0';
		return (dest);
}
