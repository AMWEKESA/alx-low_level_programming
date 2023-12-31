#include "main.h"

/**
 * clear_bit - set value of a given bit to 0
 *
 * @n: pointer to number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	else
	{
		*n = (~(1UL << index) & *n);
		return (1);
	}
}
