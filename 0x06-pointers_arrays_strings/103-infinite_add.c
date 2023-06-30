#include "main.h"
/**
 * infinite_add - adds 2 numbers
 * @n1: int to be added to n2
 * @n2: int to be added to n1
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: returns
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0;
	int i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_total = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r - 1 || i >= size_r - 1)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		val1 = (i >= 0) ? n1[i] - '0' : 0;
		val2 = (j >= 0) ? n2[j] - '0' : 0;

		temp_total = val1 + val2 + overflow;

		if (temp_total >= 10)
			overflow = 1;
		else
			overflow = 0;

		if (digits >= size_r - 1)
			return (0);

		r[digits] = (temp_total % 10) + '0';
		digits++;

		j--;
		i--;
	}
	if (digits >= size_r)
		return (0);
	r[digits] = '\0';

	return (r);
}
