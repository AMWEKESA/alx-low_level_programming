#include "main.h"
/**
 * print_times_table - prints times table,
 * @n: int whose multiples are to computed
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n < 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				z = y * x;
				if (z < 10)
				{
					if (x > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10 && z <= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
