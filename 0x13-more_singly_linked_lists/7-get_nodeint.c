#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a given index
 *
 * @head: pointer to first node
 * @index: index of the node to be returned
 *
 * Return: pointer to the node at a given index, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tem = head;

	do {
		tem = tem->next;
		x++;
	} while (tem && x < index);

	return (tem ? tem : NULL);
}
