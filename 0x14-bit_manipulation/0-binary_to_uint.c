#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: an int
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (!b)
		return (0);

	x = 0;
	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	++x;
	}

	return (y);
}
