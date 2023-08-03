#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: an int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		x = 2 * x + (b[i] - '0');
	}

	return (x);
}
