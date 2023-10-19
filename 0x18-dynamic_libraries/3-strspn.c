#include "main.h"
#include <string.h>

/**
 * _strspn - gets length of a prefix in a string
 * @s: string to searched
 * @accept: substring to be compared
 * Return: no. of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
