#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 *
 * @h: pointer to the first node of a linked list
 *
 * Return: number of elements in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int x;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	do {
		x = *h - (*h)->next;
		if (x > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			++n;
		}
		else
		{
			free(*h);
			*h = NULL;
			++n;
			break;
		}
	} while (*h);

	*h = NULL;

	return (n);
}
