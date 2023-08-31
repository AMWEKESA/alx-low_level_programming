#include "main.h"

/**
 * print_binary - print binary representation of a decimal number
 *
 * @n: number to print in binary
 *
 * Return - void
 */

void print_binary(unsigned long int n)
{
	int x, y = 0;
	unsigned long int j;

	x = 63;
	while (x >= 0)
	{
		j = n >> x;

		if (j & 1)
		{
			_putchar('1');
			y++;
		}

		else if (y)
		{
			_putchar('0');
		}
	--x;

	}

	if (!j)
	{
		_putchar('0');
	}
}
