#include <stdio.h>

/**
* main - starting pt
*
* Description: prints combination of 3 numbers
*
*Return: returns an int val
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	for (k = j + 1; k <= '9'; k++)
	{
	if ((j != i) && (k != i) && (k != j))
	{
	putchar(i);
	putchar(j);
	putchar(k);

	if (i == '7' && j == '8')
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
