#include <stdio.h>

void print_sent(void) __attribute__((constructor));

/**
  * print_sent - prints a sentence
  *
  * Return: void
  *
  */

void print_sent(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
