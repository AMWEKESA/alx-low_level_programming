#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node of a linked list at a given index
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *x = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	do {
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	} while (i < index - 1);


	x = tem->next;
	tem->next = x->next;
	free(x);

	return (1);
}
