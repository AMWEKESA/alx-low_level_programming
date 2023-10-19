#include "main.h"

/**
 * _atoi - convert str to int
 * @s: string to be changed
 * Return: returns
 */

int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, x = 0;
	int digit = 0, len = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && x == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}

	if (x == 0)
		return (0);

	return (n);
}
