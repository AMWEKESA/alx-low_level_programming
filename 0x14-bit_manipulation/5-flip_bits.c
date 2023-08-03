#include "main.h"

/**
 * flip_bits - gets the number of bits to flip
 *
 * @n: number to flip
 * @m: number to flip
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned long int y;
	unsigned long int exclusive = n ^ m;

	do {

		y += exclusive & 1;
		exclusive >>= 1;

	} while (exclusive != 0);

	return (x);
}
