#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Count the number of unique nodes
 *
 * @head: A pointer to first element
 *
 *Return: address to the start of lop, else null
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodes = 1;

	x = y = head;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	do {
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			} while (x != y);

			x = x->next;
			do {
				nodes++;
				x = x->next;
			}  while (x = y);

			return (nodes);
		}

		x = x->next;
		y = (y->next)->next;
	} while (y);

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
