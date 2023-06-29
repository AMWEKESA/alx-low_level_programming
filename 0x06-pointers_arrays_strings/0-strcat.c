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
	while (src[len] != '\0')
	{
		len++;
	{
	for (i = 0; dest[i] != '\0'; i++, len++)
	{
		src[len] = dest[i];
	}
		src[len] = '\0';
		return (src);
}
