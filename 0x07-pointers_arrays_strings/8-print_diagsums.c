#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of sqr martices
 * @a: pointer to multidimentional array
 * @size: size of matrix (array)
 * Return: returns
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < size; ++x)
	{	sum1 += a[x * size + x];
		sum2 += a[x * size + (size - 1 - x)];
	}
	  printf("%d, %d\n", sum1, sum2);
}
