#include "main.h"

/**
* main - starting pt
* Description: prints lowercase alphabets
*
*Return: returns an int void
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
