#include "main.h"

/**
 *swap_int - swaps valus of two ints
 * @a: int to be swaped with b
 *@b: to be swapped with a
 * Return: returns 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
