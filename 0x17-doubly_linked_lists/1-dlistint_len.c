#include "lists.h"

/**
 * dlistint_len - returns number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x;

	x = 0;

	if (h == NULL)
		return (x);

	while (h->prev != NULL)
	{

		h = h->prev;

    }

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}

	return (x);
}