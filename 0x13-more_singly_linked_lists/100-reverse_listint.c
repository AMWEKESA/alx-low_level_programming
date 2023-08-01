#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the first element of the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *y = NULL;

	do {
		y = x->next;
		(y)->next = x;
		x = y;
		y = x;
	} while (y != NULL);

	*head = x;

	return (*head);
}
