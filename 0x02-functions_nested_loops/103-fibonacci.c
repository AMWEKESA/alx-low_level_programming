#include <stdio.h>

/**
  *main - find and print sum of even numbers
  * should be followed by a new line
  * Return: -Always SUCCESS
  */

int main(void)
{
	unsigned long x = 1, y = 2, sum_of_even = 2;
	int i;

	do {
		x = y;
		sum_of_even = x +  y;

		if (sum_of_even % 2 == 0)
		{
			printf("%lu",sum_of_even);
			if (sum_of_even + y < 4000000)
			{
				printf(", ");
			} else
			{
				printf("\n");
			}
		}

		x = y;
		y = sum_of_even;
	} while(sum_of_even <  4000000);
	return (0);
}
