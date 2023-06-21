#include <stdio.h>

/**
 * even_fib_sum - Calculates the sum of even Fibonacci values
 *
 * Return: The sum of even Fibonacci values
 */
unsigned long int even_fib_sum(void)
{
	int x;
	unsigned long int y, z, next, sum;

	y = 1;
	z = 2;
	sum = 0;

	while ((x = 1) && (x <= 33))
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		next = y + z;
		y = z;
		z = next;
		x++;
	}

	return (sum);
}

/**
 * main - starting point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum = even_fib_sum();

	printf("%lu\n", sum);

	return (0);
}
