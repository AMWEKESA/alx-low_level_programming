#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 *
 * @s1: string to be concatenated with s2
 * @s2: string to be concatenated with s1
 * @n: no of char of s2
 *
 * Return: pointer to ,else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	x = malloc(sizeof(char) * (len1 + n + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < len1; ++i)
	{
		x[i] = s1[i];
	}
	for (j = 0; j < n; ++j)
	{
		x[i + j] = s2[j];
	}
	x[i + j] = '\0';
	return (x);
}
