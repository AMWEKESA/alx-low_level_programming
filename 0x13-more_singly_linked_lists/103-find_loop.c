#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: 1st element of list to be searched
 *
 * Return: address of the node where the loop starts, elseNULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);

	while (x && y && y->next)
	do {
		y = y->next->next;
		x = x->next;
		if (y == x)
		{
			x = head;
			do {
				x = x->next;
				y = y->next;
			} while (x != y);

			return (y);
		}
	} while (x && y && y->next);

	return (NULL);
}
