# include <stdio.h>

/**
  * main - strtn pt
  *
  * Description: print alphabets in lower except q n e
  *
  * Return: return 0
  */

int main(void)
{
	int a = 97;

	do {
		if (a != 101 && a != 113)
		{
		putchar (a);
		}
		a++;
	} while (a <= 122);

	putchar ('\n');

	return (0);
}
