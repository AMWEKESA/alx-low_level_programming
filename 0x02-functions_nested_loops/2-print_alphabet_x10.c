#include "main.h"
/**
* print_alphabet_x10 - Prints lowercase alphabets 10 times
*/

void print_alphabet_x10(void)

{

	int i = 0;
	char c = 'a';

	do {

		do {
		_putchar(c);
		c++;
		} while (c <= 'z');
		c = 'a';
		_putchar('\n');
		i++;
	} while (i <= 10);
}
