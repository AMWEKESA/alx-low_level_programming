#include "main.h"

/**
 * more_numbers - prints no.s frm 0-14
 * 10x followed by new line
 * Return: returns success
 */

void more_numbers(void)
{
	int x, y; 

	/* int y rep no of lines */
	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
