#include <stdio.h>
/**
 *main - Entry point of the c program
 *
 * Description: prints the given text without using puts or printf function
 *
 * Return: always return the argument in the main function
 */

int main(void)
{
	write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 56);
	return (1);
}
