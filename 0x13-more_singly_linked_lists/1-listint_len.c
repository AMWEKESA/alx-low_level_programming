#include "lists.h"

/**
 * listint_len - gets number of elements in a linked lists
 *
 * @h: pointer to linked list to be operated on
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	do {
		elem++;
		h = h->next;
	}  while (h);

	return (elem);
}
