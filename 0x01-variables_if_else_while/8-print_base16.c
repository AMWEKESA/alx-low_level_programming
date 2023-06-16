#include <stdio.h>
/**
* main - starting pt
*
* Description: prints
*
*Return: returns an int val
 */

int main(void)
{
	int i = 48;
	int j = 97;

	do {
		putchar(i);
		i++;
	} while (i <= 57);

	do {
		putchar(j);
		j++;
	} while (j <= 102);
	putchar('\n');

	return (0);
}
