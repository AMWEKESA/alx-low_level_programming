#include <stdio.h>
/**
* main - starting pt
*
* Description: prints combination of no.s
*
*Return: returns an int val
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	}
	if (i == '8' && j == '9')
	break;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
