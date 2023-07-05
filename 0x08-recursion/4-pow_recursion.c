#include "main.h"
#include <math.h>

/**
 * _pow_recursion - gets power of 2 n_pow_recursionumbers
 * @x: base value
 * @y: power val
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{

		return (x * _pow_recursion(x, (y - 1)));
	}
}
