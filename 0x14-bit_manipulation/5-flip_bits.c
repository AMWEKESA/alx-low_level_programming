#include "main.h"

/**
 * flip_bits - gets the number of bits to flip
 *
 * @n: number to flip
 * @m: number to flip
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		x += i & 1;
		i >>= 1;
	}

	return (x);
}
