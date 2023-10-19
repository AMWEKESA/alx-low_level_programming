#include "main.h"

/**
 * _strlen - retund length of a string
 * @s: string whos length is t be retuned
 * Return: returns 0
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
