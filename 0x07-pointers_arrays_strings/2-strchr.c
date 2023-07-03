#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched
 * Return: pointer to 1st occurance or NULL
 */

char *_strchr(char *s, char c)
{
	char *outcome = strchr(s, c);

	return (outcome);
}
