#include <stdio.h>
/**
* main - starting pt
*
* Description: prints combo to two two no.s
*
*Return: returns an int val
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
	for (j = i + 1; j <= 99; j++)
	{
		putchar((i / 10) + '0');
		putchar((p % 10) + '0');
		putchar(' ');

		putchar((j / 10) + '0');
		putchar((j % 10) + '0');

	if (i == 98 && j == 99)
		break;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n')
	return (0);
}
