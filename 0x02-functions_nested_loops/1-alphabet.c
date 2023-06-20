#include "main.h"

/**
  * main - starting pt
  * Description: prints lowercase alphabets
  *
  *Return: returns an int void
 */

void print_alphabet(void);

int main(void)
{

char x = 'a';
do {
	_putchar(x);
	x++;
	} while (x <= 'z');
	_putchar('\n');

	return (0);
}
