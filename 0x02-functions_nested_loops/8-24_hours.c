#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
*
*starting from 00:00 to 23:59
*
* Return: rturn 0
*/

void jack_bauer(void)

{
	int x, y;

	x = 0;
	do {
		y = 0;
		do {
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		} while (y < 60);

		x++;

	} while (x < 24);
}
