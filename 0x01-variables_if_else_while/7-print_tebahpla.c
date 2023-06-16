#include <stdio.h>
/**
* main - starting pt
*
* Description: prints lowercase alphabet in reverse
*
*Return: returns an int val
 */

int main(void)
{
	int i = 122;

	do {
		putchar(i);
		i--;

	} while (i >= 97);
	return (0);
}
