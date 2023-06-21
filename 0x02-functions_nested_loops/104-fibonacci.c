#include <stdio.h>
/**
* main - fibonacci series
*
* Return:  (Success)
*/

int main(void)
{
	unsigned long int x;
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int l = 1000000000;
	unsigned long int prev_1;
	unsigned long int prev_2;
	unsigned long int next_1;
	unsigned long int next_2;

	printf("%lu", prev);

	for (x = 1; x < 91; x++)
	{
		printf("%lu", next);
		next += prev;
		prev = next - prev;
	}


		prev_1 = (prev / l);
		prev_2 = (prev % l);
		next_1 = (next / l);
		next_2 = (next % l);


	for (x = 92; x < 99; x++)
	{
		printf("%lu, ", next_1 + (next_2 / l));
		printf("%lu, ", next_2 % l);
		next_1 = next_1 + prev_1;
		prev_1 = next_1 - prev_1;
		prev_2 = next_2 + prev_2;
		prev_2 = next_2 - prev_2;
	}
	printf("\n");
	return (0);
}
