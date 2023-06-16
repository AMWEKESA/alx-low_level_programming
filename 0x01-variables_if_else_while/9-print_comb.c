#include <stdio.h>

/**
* main - starting pt
*
* Description: prints combination of single digits with commas
*
*Return: returns an int val
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
