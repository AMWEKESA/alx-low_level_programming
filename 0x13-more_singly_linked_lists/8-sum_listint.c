#include "lists.h"

/**
 * sum_listint - calculates the sum of all data of a listint_t list
 *
 * @head: first element of a linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tem = head;

	while (tem)
	do {
		add += tem->n;
		tem = tem->next;
	} while (tem);

	return (add);
}
