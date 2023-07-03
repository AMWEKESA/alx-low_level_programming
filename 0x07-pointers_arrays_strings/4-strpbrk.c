#include "main.h"
#include <string.h>

/**
 * _strpbrk - seaches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string with character to be matched
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);
	return (i);
}
