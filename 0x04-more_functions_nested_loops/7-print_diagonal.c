#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: no. of \ to be used
 * Return: returns
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; ++x)
		{
		for (y = 0; y < x; ++y)
		{
			_putchar(32); /* ASCII val for space */
		}
		_putchar(92); /* ASCII val for \ */
		_putchar('\n');
		}
	}
}
