#include "main.h"

/**
 * print_binary - prints binary rep of a decimal number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int j;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			_putchar('1');
			++x;
		}
		else if (x)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
