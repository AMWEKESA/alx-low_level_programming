#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring on a string
 * @haystack: string to be scanned
 * @needle: substring to be matched
 * Return: pointer to beginning of location
 */

char *_strstr(char *haystack, char *needle)
{
	char *x;

	x = strstr(haystack, needle);
	return (x);
}
