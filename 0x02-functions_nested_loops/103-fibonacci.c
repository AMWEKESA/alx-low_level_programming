#include <stdio.h>

/**
  *main - find and print sum of even numbers
  * should be followed by a new line
  * Return: -Always SUCCESS
  */

int main(void)
{
	unsigned long x = 1, y = 2, sum_of_even = 2;
	unsigned long even_fib_sum = 2; /* sum of even fibonacci */

	do {
		x = y;
		sum_of_even = x +  y;

		if (sum_of_even % 2 == 0)
		{
			even_fib_sum += sum_of_even;
		}

		x = y;
		y = sum_of_even;
	} while (sum_of_even < 4000000);
	return sum_of_even;
}
