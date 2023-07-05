#include "main.h"


/**
 * factorial - returns factorial of n
 * @n: number whose factorial is to be found
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
