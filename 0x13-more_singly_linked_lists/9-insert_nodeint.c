#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node into a linked list,
at a given index
 *
 * @head: pointer to the first element of list
 * @idx: index where the new node is to be inserted
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_n;
	listint_t *tem = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}

	for (x = 0; tem && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_n->next = tem->next;
			tem->next = new_n;
			return (new_n);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
