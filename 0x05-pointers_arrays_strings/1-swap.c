#include "main.h"

/**
 *swap_int - swaps valus of two ints
 * @x: int to be swaped with y
 *@x: to be swapped with x
 * Return: returns 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
