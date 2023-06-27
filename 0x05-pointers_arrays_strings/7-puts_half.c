#include "main.h"

/**
 * puts_half - prints half od string
 * @str: string to be printed
 * Return: returns
 */

void puts_half(char *str)
{
	int start_index;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
		if (len % 2 == 0)
		{
			start_index = len / 2;

		}
		else
		{
			start_index = (len + 1) / 2;
		}
		int i;

		for (i = start_index; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
