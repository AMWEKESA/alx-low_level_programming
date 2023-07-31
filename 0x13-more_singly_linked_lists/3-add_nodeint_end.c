#include "lists.h"

/**
 * add_nodeint_end - add node at the end of linked list
 *
 * @head: pointer to the head of the list
 * @n: data to be inserted to the new node
 *
 * Return: pointer to new node, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *tem = *head;

	x = malloc(sizeof(listint_t) + 1);
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
	}
	else
	{
		do {
			tem = tem->next;
		} while (tem->next != NULL);

		tem->next = x;
	}
	return (x);
}
