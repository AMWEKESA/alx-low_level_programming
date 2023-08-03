#include "main.h"

/**
 * get_endianness - checks machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *str = (char *) &i;

	return (*str);
}
