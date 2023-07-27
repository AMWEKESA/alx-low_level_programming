#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_node - adds a new element to the head of a linked list
  *
  * @head: pointed to lists head
  * @str: string to be added to the list
  *
  * Return: string to be added
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	do {
		len++;
	} while (str[len] != '\0');

		new_node = malloc(sizeof(list_t));

		if (!new_node)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = (*head);
		(*head) = new_node;
		return (*head);

}
