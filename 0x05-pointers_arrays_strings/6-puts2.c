#include "main.h"

/**
 * puts2 - write characters of a string starting wit 1st
 * @str: string to be written
 * Return: returns
 */

void puts2(char *str)
{
	int i, length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
