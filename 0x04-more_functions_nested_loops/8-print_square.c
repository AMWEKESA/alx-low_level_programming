#include "main.h"

/**
 * print_square - prints a sqr
 * @size: number of # to be used
 * Return: returns
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; ++x)
		{
		for (y = 0; y < size; ++y)
		{
		_putchar(35); /* ASCII val of # */
		}
		_putchar('\n');
		}
	}
}
