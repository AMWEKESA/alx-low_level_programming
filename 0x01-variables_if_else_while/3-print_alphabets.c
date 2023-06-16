#include <stdio.h>

/**
  * main - startting point
  *
  * Desription: print both upper and lowercase
  *
  *Return: returns 0
  */

int main(void)
{
	int i = 97;
	int j = 65;

	do {
		putchar(i);
		i++
	} while (i <= 122);

	do {
		putchar(j);
		j++
	} while (j <= 90);
	putchar('\n');
	return (0);
}
