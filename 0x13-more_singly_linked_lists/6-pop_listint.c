#include "lists.h"

/**
 * pop_listint - pops the head of a linked list
 *
 * @head: pointer to the first element of a linked list
 *
 * Return: popped elements, else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int pop;

	if (!head || !*head)
		return (0);

	pop = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (pop);
}
