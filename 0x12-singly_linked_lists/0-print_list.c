#include <stdio.h>
#include "lists.h"

/**
  * print_list - print all elements of a linked'
  *
  * @h: pointer to list to be printed
  *
  * Return: number nodes
  */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);

	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	} while (h);
	return (x);
}
