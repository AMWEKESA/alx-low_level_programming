#include "main.h"

/**
 * print_numbers - prints numbers frm 0-9 folloewd by new line
 *
 * Return: returns successs
 */

void print_numbers(void)
{
	int x = 0; /* initialization */

	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
