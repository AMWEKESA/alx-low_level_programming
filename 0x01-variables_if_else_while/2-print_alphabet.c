#include <stdio.h>

/**
  * main - strat point
  *
  *Description: prints aphabets in lowercase
  *
  *Return: return 0
  */
int main(void)
{
	int a = 97;

	do {
		putchar(a);
		a++;
	} while (a <= 122)
	putchar('\n');
	return (0);
}
