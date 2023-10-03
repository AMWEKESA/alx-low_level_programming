#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x;

	x = 0;

	if (h == NULL)
		return (x);

	while (h->prev != NULL)
		h = h->prev;

	do {
		printf("%d\n", h->n);
		x++;
		h = h->next;
	} while (h != NULL);

	return (x);
}