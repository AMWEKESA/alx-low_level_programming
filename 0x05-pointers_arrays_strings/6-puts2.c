#include "main.h"

/**
 * puts2 - write characters of a string starting wit 1st
 * @str: string to be written
 * Return: returns
 */

void puts2(char *str)
{
	int i = 0;

	while (*str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
