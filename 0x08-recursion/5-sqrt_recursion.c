#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns srrt of a number
 * @n: number to find its sqrt
 * @i: current i val
 * Return: sqrt or  -1 otherwise
 */

int checkSqrt(int n, int i);

int _sqrt_recursion(int n)
{

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
		return (checkSqrt(n, n - 1));
	}
}

/**
 * checkSqrt - find the square root using math.h library
 * @i: current i val
 * @n: number to find its square root
 * Return: square root of n if found, -1 otherwise
 */

int checkSqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i <= 0)
	{
		return (-1);
	}
	else
	{
		return (checkSqrt(n, i - 1));
	}
}
