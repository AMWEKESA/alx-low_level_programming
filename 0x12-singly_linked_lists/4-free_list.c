#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees the list
  *
  * @head: pointer ot the list to be freed
  *
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *x;

	do {
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	} while (head);
}
