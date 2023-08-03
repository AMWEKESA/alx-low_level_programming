#include "main.h"

/**
 * get_bit - get value of a bit at an index in a decimal number
 *
 * @n: number to be searched
 * @index: index of the bit
 *
 * Return: bit value in dec
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
