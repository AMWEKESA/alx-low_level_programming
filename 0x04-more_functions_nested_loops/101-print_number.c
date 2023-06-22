#include "main.h"

/**
 * print_number - prints an integer
 * @n: int to be printed
 * Return: returns
 */
void print_number(int n)
{
	long int x = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		x = n;
	}
	if (x >= 10)
	print_number(x / 10);
	_putchar((x % 10) + '0');
}
