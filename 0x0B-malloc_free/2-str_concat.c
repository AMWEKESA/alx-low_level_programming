#include "main.h"
#include <stdlib.h>

/**
 * *str_concat  - cocnatnates 2 strings
 *
 * @s1: string to be concatenated with s2
 * @s2: string to be concatenated with s1
 *
 * Return: return pointer to concatenated string, else NULL onn failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *y;
	int j, i;
	int len1 =0, len2 = 0, total_len = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	total_len = len1 + len2;

	y = malloc(sizeof(char) * (total_len + 1));
	if (y == NULL)
		return (NULL);
	for (i = 0; i < len1; ++i)
	{
		y[i] = s1[i];
	}
	for (j = 0; j < len2; ++j)
	{
		y[i + j] = s2[j];
	}
	y[i + j] = '\0';

	return (y);
}
