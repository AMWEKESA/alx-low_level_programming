#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_node_end - add new elements at the end of a linked list
  *
  * @head: pointer to lists head
  * @str: string to be added
  *
  * Return: pointer to str, else NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod;
	list_t *tem = *head;
	unsigned int len;

	len = 0;
	do {
		++len;
	} while (str[len]);

	nod = malloc(sizeof(list_t));
	if (!nod)
		return (NULL);

	nod->str = strdup(str);
	nod->len = len;
	nod->next = NULL;

	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}
	while (tem->next)
	{
		tem = tem->next;
	}
		
	tem->next = nod;
	return (nod);
}
