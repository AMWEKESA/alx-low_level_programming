#include "lists.h"

/**
 * add_nodeint - add new node at the head of a linked list
 *
 * @head: pointer to the first node in the list
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
