#include "main.h"

/**
 * rev_string - reverses a string
 * @s: sting to be reversed
 * Return: returns 0
 */

void rev_string(char *s)
{
	int i, length = 0;
	char rev = s[0];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i < length - 1; i = 0; i++)
	{
		rev = s[i];
		s[i] = s[length - i 1];
		s[length - i - 1] = rev;
	}
	_putchar('\n');
}
