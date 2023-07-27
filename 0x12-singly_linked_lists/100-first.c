#include "lists.h"
#include <stdio.h>

/**
  * print_sent - prints a sentence
  *
  * Return: void
  *
  */

void print_sent(void) __attribute__((constructor));

void print_sent(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
