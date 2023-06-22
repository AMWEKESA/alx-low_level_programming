#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - start of program
 * Desription: finds largest prime factor of 612852475143
 * Return: returns
 */

int main(void)
{
	long x, max_factor;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (x = 1; x <= sqr; x++)
	{
	if (num % x == 0)
	{
		max_factor = num / x;
	}
	}
	printf("%ld\n", max_factor);
	return (0);
}
