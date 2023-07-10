#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to newl allocated space memory
 *
 * @str: string to be copied
 *
 * Return: return pointer to duplicate str, else NULL
 *
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		++i;

	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < str[i]; ++i)
	{
		s[i] = str[i];
	}
	return (s);
}
