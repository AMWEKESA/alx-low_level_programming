#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *ch;

	x = 1;
	ch = (char *) &x;

	return ((int)*ch);
}
