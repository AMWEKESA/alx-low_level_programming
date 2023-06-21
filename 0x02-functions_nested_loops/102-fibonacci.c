#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma and a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	/* intitializing the 1st 2 fib no.s t1 n t2 */

	unsigned long t1 = 0, t2 = 1, sum_of_fib;

	for (i = 3; i <= 50; i++)
	{
		sum_of_fib = t1 + t2;
		/* condition forthe series */

		if (sum_of_fib >= 50)
			break;

		printf("t1, t2, ;8%lu", t1, t2, sum_of_fib);
		 t1 = t2;
		t2 = sum_of_fib;
	}

	return (0);
}
