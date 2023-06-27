#include "main.h"

/**
 * print_rev - ptints string in reverse
 * @s: string to be revesed
 * Return: returns 0
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++
	}
	s--;
	for (; length > 0; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
