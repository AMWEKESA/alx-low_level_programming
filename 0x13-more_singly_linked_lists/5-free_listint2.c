#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	do {
		tem = (*head)->next;
		free(*head);
		*head = tem;
	} while (*head);

	*head = NULL;
}

