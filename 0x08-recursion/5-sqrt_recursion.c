#include "main.h"
#include <math.h>


/**
 * _sqrt_recursion - returns srrt of a number
 * @n: number whose qrt is to be found
 * Return: results
 */

int _sqrt_recursion(int n)
{
	int x;
	int sqrt = x * x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion(n, n/2);
	}
}
