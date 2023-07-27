#include <stdio.h>
#include "lists.h"

/**
  * list_len - gets the length of linked list elements
  *
  * @h: pointer to the linked list
  *
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	do {
		h = h->next;
		++x;
	} while (h);
	return (x);
}
