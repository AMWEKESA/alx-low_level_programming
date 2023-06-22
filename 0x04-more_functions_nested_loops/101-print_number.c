#include "main.h"

/**
 * print_number - prints an integer
 * @n: int to be printed
 * Return: returns
 */
void print_number(int n)
{
	long int x = n;

	if (n <= 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((long int) n % 10 + '0');
}
